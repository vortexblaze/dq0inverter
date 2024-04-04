#include <referencegen.h>;

static double Lf = 0.0204;
static double pi = 3.1415;
static double Kp = 10;
static double Ki = 1;
double *Time =0;
double PreviousId = 0,PrevioudIq = 0;
double lastTime = -1.0; // Initisalize to an invalid value to indicate first run
double previousPin = 0,previousPout =0;


double PowerIntegral(SimStruct *S,double currentPin, double currentPout) {
    time_T currentTime = ssGetT(S); // Retrieve current simulation time
    double dt = 0.0;
    
    if (lastTime >= 0) { // Check if this is not the first execution
        dt = currentTime - lastTime;
    }
    
    if (currentPin != previousPin || currentPout != previousPout) {
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
    return Iin*Vin;
}


double getOutPowerValue (double Iout, double Vout){
    return Iout*Vout;
}


double IdrefCalc(double Vd,double Iin, double Iout, double Vin, double Vout){
    double inputPower = getInPowerValue(Iin, Vin);
    double outputPower = getOutPowerValue(Iout, Vout);

    double integralP = PowerIntegral(Time,inputPower, outputPower);
    return (1/Vd)*(Kp*(inputPower-outputPower))*(Ki*(integralP));
    
}


double VdrefCalc(double Idref, double Id, double Iq, double Iin, double Vin, double Iout, double Vout, double Vd) {
    double inputPower = getInPowerValue(Iin, Vin);
    double outputPower = getOutPowerValue(Iout, Vout);
    double integralP = PowerIntegral(Time,inputPower, outputPower);

    double Vdref = Kp * (Idref - Id) + Ki * integralP - (2 * pi * Iq * Lf) + Vd;
    return Vdref;
}
    
    
/*// Legacy Code for VdrefCalc();
double VdrefCalc(){ //Vd* calculation
double integralP = PowerIntegral(getInPowerValue(Iin,Vin),getOutPowerValue(Iout,Vout));
return Kp*(Idref-Id)+Ki*(integralP)-(2*pi*Iq*Lf)+Vd;
}*/ 