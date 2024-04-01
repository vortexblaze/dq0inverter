#include <referencegen.h>
#include <math.h>  // For the sqrt function
//#include <stulib.h>;

double PowerIntegral (double currentPin, double currentPout){

if (currentPin != previousPin || currentPout != previousPout) {
            // Input has changed, calculate integrals 
            double  integralPin = 0.5 * (currentPin + previousPin) * dt;
            double  integralPout = 0.5 * (currentPout + previousPout) * dt;
            currentPin=previousPin;
            currentPout=previousPout;
            return integralPin-integralPout;
        }
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
