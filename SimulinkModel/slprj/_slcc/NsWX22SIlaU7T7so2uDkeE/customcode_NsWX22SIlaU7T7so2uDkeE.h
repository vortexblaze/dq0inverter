#ifndef __customcode_NsWX22SIlaU7T7so2uDkeE_h__
#define __customcode_NsWX22SIlaU7T7so2uDkeE_h__

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
#include "ddsrfreferencegen.h"


/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
#define customcode_NsWX22SIlaU7T7so2uDkeE_initializer()

#define customcode_NsWX22SIlaU7T7so2uDkeE_terminator()
#ifdef __cplusplus
}
#endif

#endif

