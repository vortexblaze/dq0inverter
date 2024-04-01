
// Input parameters (adjust according to your system)
extern double P_ref;   // Array to store active power references
extern double Q_ref = 0 ;   // Array to store reactive power references
extern double Idin,Idout;
extern double previousPin=0,previousPout=0;
extern double dt = 0.0001;
extern double integralPin, integralPout;

//System Input Value for reference generation
extern double Kp = 10;
extern double Ki = 1;
extern double Idref,Id,Iqref,Iq,Vd,Vq;
extern double Lf;
extern double pi =3.142;

//DC Link Voltage Variables
extern double Iin,Iout,Vin,Vout;


#ifndef referencegen.h //prevent multiple inclusion for header file
#define referencegen.h
//function declaration
double PowerIntegral (double currentPin, double currentPout);
double getInPowerValue (double Iin,double Vin);
double getOutPowerValue (double Iout, double Vout);
double VdrefCalc ();
double Idref(double Vd,double Pin, double Pout)
#endif