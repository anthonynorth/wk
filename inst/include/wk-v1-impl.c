
#include "wk-v1.h"
#include <stdlib.h> // for malloc()

char wk_handler_void_vector_start(const WKGeometryMeta_t* meta, void* userData) {
  return WK_CONTINUE;
}

SEXP wk_handler_void_vector_end(const WKGeometryMeta_t* meta, void* userData) {
  return R_NilValue;
}

char wk_handler_void_feature(const WKGeometryMeta_t* meta, R_xlen_t nFeatures, R_xlen_t featureId, void* userData) {
  return WK_CONTINUE;
}

char wk_handler_void_geometry(const WKGeometryMeta_t* meta, uint32_t nParts, uint32_t partId, void* userData) {
  return WK_CONTINUE;
}

char wk_handler_void_ring(const WKGeometryMeta_t* meta, uint32_t size, uint32_t nRings, uint32_t ringId, void* userData) {
  return WK_CONTINUE;
}

char wk_handler_void_coord(const WKGeometryMeta_t* meta, const WKCoord_t coord, uint32_t nCoords, uint32_t coordId,
                           void* userData) {
  return WK_CONTINUE;
}

char wk_handler_void_error(R_xlen_t featureId, int code, const char* message, void* userData) {
  Rf_error(message);
  return WK_ABORT;
}

void wk_handler_void_finalizer(void* userData) {

}

WKHandler_t* wk_handler_create() {
  WKHandler_t* handler = (WKHandler_t*) malloc(sizeof(WKHandler_t));
  handler->WKAPIVersion = 1;
  handler->dirty = 0;
  handler->userData = NULL;

  handler->vectorStart = &wk_handler_void_vector_start;
  handler->vectorEnd = &wk_handler_void_vector_end;

  handler->featureStart = &wk_handler_void_feature;
  handler->nullFeature = &wk_handler_void_feature;
  handler->featureEnd = &wk_handler_void_feature;

  handler->geometryStart = &wk_handler_void_geometry;
  handler->geometryEnd = &wk_handler_void_geometry;

  handler->ringStart = &wk_handler_void_ring;
  handler->ringEnd = &wk_handler_void_ring;

  handler->coord = &wk_handler_void_coord;

  handler->error = &wk_handler_void_error;
  handler->vectorFinally = &wk_handler_void_finalizer;
  handler->finalizer = &wk_handler_void_finalizer;

  return handler;
}

void wk_handler_destroy(WKHandler_t* handler) {
  if (handler != NULL) {
    handler->finalizer(handler->userData);
    free(handler);
  }
}

void wk_handler_destroy_xptr(SEXP xptr) {
  wk_handler_destroy((WKHandler_t*) R_ExternalPtrAddr(xptr));
}

SEXP wk_handler_create_xptr(WKHandler_t* handler, SEXP tag, SEXP prot) {
  SEXP xptr = R_MakeExternalPtr(handler, tag, prot);
  R_RegisterCFinalizerEx(xptr, &wk_handler_destroy_xptr, FALSE);
  return xptr;
}

struct wk_handler_run_data {
  SEXP (*readFunction)(SEXP readData, WKHandler_t* handler);
  SEXP readData;
  WKHandler_t* handler;
};

void wk_handler_run_cleanup(void* data) {
  struct wk_handler_run_data* runData = (struct wk_handler_run_data*) data;
  runData->handler->vectorFinally(runData->handler->userData);
}

SEXP wk_handler_run_internal(void* data) {
  struct wk_handler_run_data* runData = (struct wk_handler_run_data*) data;

  if (runData->handler->dirty) {
    Rf_error("Can't re-use a wk_handler");
  } else {
    runData->handler->dirty = 1;
  }

  return runData->readFunction(runData->readData, runData->handler);
}

SEXP wk_handler_run_xptr(SEXP (*readFunction)(SEXP readData, WKHandler_t* handler), SEXP readData, SEXP xptr) {
  WKHandler_t* handler = (WKHandler_t*) R_ExternalPtrAddr(xptr);
  struct wk_handler_run_data runData = { readFunction, readData, handler };
  return R_ExecWithCleanup(&wk_handler_run_internal, &runData, &wk_handler_run_cleanup, &runData);
}

SEXP wk_error_sentinel(int code, const char* message) {
  const char* names[] = {"code", "message", ""};
  SEXP sentinel = PROTECT(Rf_mkNamed(VECSXP, names));
  Rf_setAttrib(sentinel, Rf_install("class"), Rf_mkString("wk_error_sentinel"));
  SEXP codeSEXP = PROTECT(Rf_allocVector(INTSXP, 1));
  INTEGER(codeSEXP)[0] = code;
  SET_VECTOR_ELT(sentinel, 0, codeSEXP);

  SET_VECTOR_ELT(sentinel, 1, Rf_mkString(message));
  UNPROTECT(2);
  return sentinel;
}