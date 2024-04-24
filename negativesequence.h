#include <math.h>  // For the sqrt function
#include <time.h> // For the timing Function
#include <complex.h> // complex functions
#include "simstruc.h" // Make sure to include this if you're using Simulink's simulation time functions



#ifndef negativesequence.h //prevent multiple inclusion for header file
#define negativesequence.h

//Negative Sequence Generation Function
std::complex<double> NegativeSequenceVa(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc);
std::complex<double> NegativeSequenceVb(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc);
std::complex<double> NegativeSequenceVc(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc);

//Rectangular and Polar Form conversion funciton
std::pair<double, double> RectangularToPolar(const std::complex<double>& rect);
std::complex<double> PolarToRectangular(double magnitude, double angleRadians);

//Va,Vb,Vc Negative Generation Full Function
std::pair<double, double> NegSeqVaGen (double magnitudeA ,double angleRadiansA ,double magnitudeB,double angleRadiansB,double magnitudeC,double angleRadiansC);
std::pair<double, double> NegSeqVbGen (double magnitudeA ,double angleRadiansA ,double magnitudeB,double angleRadiansB,double magnitudeC,double angleRadiansC);
std::pair<double, double> NegSeqVcGen (double magnitudeA ,double angleRadiansA ,double magnitudeB,double angleRadiansB,double magnitudeC,double angleRadiansC);


#endif