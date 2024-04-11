
#include <math.h>  // For the sqrt function
#include <time.h> // For the timing Function
#include "simstruc.h" Make sure to include this if you're using Simulink's simulation time functions



#ifndef referencegen.h //prevent multiple inclusion for header file
#define referencegen.h


//function declaration
double getInPowerValue (double Iin,double Vin);
double getOutPowerValue (double Iout, double Vout);
double PowerIntegral(double Time,double currentPin, double currentPout);
//double VdrefCalc(double Idref, double Id, double Iq, double Iin, double Vin, double Iout, double Vout, double Vd);
double IdrefCalc(double Time,double Vd,double Iin, double Iout, double Vin, double Vout);
bool ReferenceGenTrigger(double freq);

//bool datacheck (double Id, double Iq,double Vd);
#endif