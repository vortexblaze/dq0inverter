#include "customcode_D0Qr9fo7Qr3nVDq3ImVQH.h"
#ifdef __cplusplus
extern "C" {
#endif


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC extern const char_T *get_dll_checksum_D0Qr9fo7Qr3nVDq3ImVQH(void);
DLL_EXPORT_CC extern real_T getInPowerValue_D0Qr9fo7Qr3nVDq3ImVQH(real_T Iin, real_T Vin);
DLL_EXPORT_CC extern real_T getOutPowerValue_D0Qr9fo7Qr3nVDq3ImVQH(real_T Iout, real_T Vout);
DLL_EXPORT_CC extern real_T PowerIntegral_D0Qr9fo7Qr3nVDq3ImVQH(real_T Time, real_T currentPin, real_T currentPout);
DLL_EXPORT_CC extern real_T IdrefCalc_D0Qr9fo7Qr3nVDq3ImVQH(real_T Time, real_T Vd, real_T Iin, real_T Iout, real_T Vin, real_T Vout);
DLL_EXPORT_CC extern boolean_T ReferenceGenTrigger_D0Qr9fo7Qr3nVDq3ImVQH(real_T freq);
DLL_EXPORT_CC extern boolean_T detectZeroCrossing_D0Qr9fo7Qr3nVDq3ImVQH(real_T lastSample, real_T currentSample);

/* Function Definitions */
DLL_EXPORT_CC const uint8_T *get_checksum_source_info(int32_T *size);
#ifdef __cplusplus
}
#endif

