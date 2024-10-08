
#include <math.h>  // For the sqrt function
#include <time.h> // For the timing Function
#include <complex.h>
//#include "simstruc.h" Make sure to include this if you're using Simulink's simulation time functions



#ifndef referencegen.h //prevent multiple inclusion for header file
#define referencegen.h


//function declaration
//Reference Id and Iq Generation
double getInPowerValue (double Iin,double Vin);
double getOutPowerValue (double Iout, double Vout);
double PowerIntegral(double Time,double currentPin, double currentPout);
double IdrefCalc(double Time,double Vd,double Iin, double Iout, double Vin, double Vout);

//Negative Sequence Voltage Generation
 double NegativeSequenceVa( double Va,  double Vb, double Vc);
 double NegativeSequenceVb( double Va,  double Vb, double Vc);
 double NegativeSequenceVc( double Va,  double Vb, double Vc);


#endif