#include <referencegen.h>;

static double Lf = 0.0204;
static double pi = 3.1415;
static double Kp = 10;
static double Ki = 1;
static double a = 
//double Time = -1;
double currentTime = -1;
double PreviousId = 0,PrevioudIq = 0;
double lastTime = -1.0; // Initisalize to an invalid value to indicate first run
double previousPin = 0,previousPout =0;
double dt = 0.0;//Assign in the C function

bool ReferenceGenTrigger(double freq){
if (freq<50.05||freq>49.95){
    return true;
}else  {return false;}
}

double PowerIntegral(double Time,double currentPin, double currentPout) {
     
    if (currentPin != previousPin || currentPout != previousPout) {

       currentTime = Time; // Retrieve current simulation time
    
    if (lastTime >= 0) { // Check if this is not the first execution
        dt = currentTime - lastTime;
    } else { dt = currentTime;}

        double integralPin = 0.0, integralPout = 0.0;
        if (dt > 0) { // Ensure dt is positive and not the first run
            integralPin = 0.5 * (currentPin + previousPin) * dt;
            integralPout = 0.5 * (currentPout + previousPout) * dt;
        }
        
        // Update for next iteration
        previousPin = currentPin;
        previousPout = currentPout;
        lastTime = currentTime; // Update the last change time
        return integralPin - integralPout;
    }
    
    // In case there's no change, we do not update lastTime
    return 0.0; // Or maintain the last calculated value
}
double getInPowerValue (double Iin,double Vin){
    double value = Iin*Vin;
    return value;
}


double getOutPowerValue (double Iout, double Vout){
    double value = Iout*Vout;
    return value;
}


double IdrefCalc(double Time,double Vd,double Iin, double Iout, double Vin, double Vout){
    double inputPower = getInPowerValue(Iin, Vin);
    double outputPower = getOutPowerValue(Iout, Vout);

    double integralP = PowerIntegral(Time,inputPower, outputPower);
    return (1/Vd)*(Kp*(inputPower-outputPower))*(Ki*(integralP));
    
}


complex double NegativeSequenceVa(complex double Va, complex double Vb,complex double Vc){

      // Phase shift operator a, which is e^(j*120°)
    complex double a = cexp(I * 2.0 * M_PI / 3.0);

    // Calculate the negative sequence component
    complex double V_negative = (Va + cpow(a, 2) * Vb + a * Vc) / 3.0;

    return V_negative;
    
}

complex double NegativeSequenceVb(complex double Va, complex double Vb,complex double Vc){

      // Phase shift operator a, which is e^(j*120°)
    complex double a = cexp(I * 2.0 * M_PI / 3.0);

    // Calculate the negative sequence component
    complex double V_negative = (Vb + cpow(a, 2) * Vc + a * Va) / 3.0;

    return V_negative;
    
}
complex double NegativeSequenceVc(complex double Va, complex double Vb,complex double Vc){

      // Phase shift operator a, which is e^(j*120°)
    complex double a = cexp(I * 2.0 * M_PI / 3.0);

    // Calculate the negative sequence component
    complex double V_negative = (Vc + cpow(a, 2) * Va + a * Vb) / 3.0;

    return V_negative;
    
}

