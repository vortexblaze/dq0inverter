#include <math.h>  // For the sqrt function
#include <time.h> // For the timing Function
#include <complex.h> // complex functions
//#include "simstruc.h" // Make sure to include this if you're using Simulink's simulation time functions
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



#ifndef ddsrfreferencegen.h //prevent multiple inclusion for header file
#define ddsfreferencegen.h

void initializeMatrix(double mat[4][4], double ed_plus, double eq_plus, double ed_minus, double eq_minus);


#endif