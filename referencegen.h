
#include <referencegen.c> // Headers File

// Input parameters (adjust according to your system)
double P_ref;   // Array to store active power references
double Q_ref = 0 ;   // Array to store reactive power references
double Pin,Pout,Delta; 
double pi =3.142;
double Idin,Idout;


//function declaration
double Vdrefcalc(double deltaP); //Vdref calculation
double Vqrefcalc(double deltaP); //Vqref calculation
double deltaPcalc (double Pin,double Pout); //Delta Pout Calculation
double Idrefcalc(double Pin, double Pout, double Kp, double Ki, double Vd, double dt, double &integral_term); //calculate Idref

