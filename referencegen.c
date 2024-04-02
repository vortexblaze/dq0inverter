#include <referencegen.h>
#include <math.h>  // For the sqrt function
#include <time.h> // For the timing Function
//#include "simstruc.h" Make sure to include this if you're using Simulink's simulation time functions


double lastTime = -1.0; // Initialize to an invalid value to indicate first run

double PowerIntegral(double currentPin, double currentPout) {
    double currentTime = ssGetT(S); // Retrieve current simulation time
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

double VdrefCalc(){ //Vd* calculation
double integralP = PowerIntegral(getInPowerValue(Iin,Vin),getOutPowerValue(Iout,Vout));
return Kp*(Idref-Id)+Ki*(integralP)-(2*pi*Iq*Lf)+Vd;
}

double Idref(double Vd,double Pin, double Pout){
double integralP = PowerIntegral(getInPowerValue(Iin,Vin),getOutPowerValue(Iout,Vout));
return (1/Vd)*(Kp*(Pin-Pout))*(Ki*(integralP));
}

void updateState (){
    while (EnablePin && dataupdate){
        getdata();
        
    }

    void getdata(){
        
    }
    