#ifndef __customcode_pYfYd3Hgo3uJa7SLZ8VngH_h__
#define __customcode_pYfYd3Hgo3uJa7SLZ8VngH_h__

/* Include files */
#include "mex.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tmwtypes.h"


/* Helper definitions for DLL support */
#if defined _WIN32 
  #define DLL_EXPORT_CC __declspec(dllexport)
#else
  #if __GNUC__ >= 4
    #define DLL_EXPORT_CC __attribute__ ((visibility ("default")))
  #else
    #define DLL_EXPORT_CC
  #endif
#endif
/* Custom Code from Simulation Target dialog */
#include "referencegen.h"
#include"zerocrossingenable.h"

/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
#define customcode_pYfYd3Hgo3uJa7SLZ8VngH_initializer()

#define customcode_pYfYd3Hgo3uJa7SLZ8VngH_terminator()
#ifdef __cplusplus
}
#endif

#endif

