#include <math.h>  // For the sqrt function
#include <time.h> // For the timing Function
#include <complex.h> // complex functions
#include "simstruc.h" Make sure to include this if you're using Simulink's simulation time functions



#ifndef negativesequence.h //prevent multiple inclusion for header file
#define negativesequence.h



//Negative Sequence Voltage Generation
 std::complex<double> NegativeSequenceVa(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc);
 /*double NegativeSequenceVb( double Va,  double Vb, double Vc);
 double NegativeSequenceVc( double Va,  double Vb, double Vc);*/


#endif