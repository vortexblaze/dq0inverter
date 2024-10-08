#include <referencegen.h>;

static double Lf = 0.0204;
static double pi = 3.1415;
static double Kp = 10;
static double Ki = 1;
double *Time =0;
double PreviousId = 0,PrevioudIq = 0;
double lastTime = -1.0; // Initisalize to an invalid value to indicate first run
double previousPin = 0,previousPout =0;
double dt = 0.0;//Assign in the C function


double PowerIntegral(SimStruct *S,double currentPin, double currentPout) {
     
    if (currentPin != previousPin || currentPout != previousPout) {

       time_T currentTime = ssGetT(S); // Retrieve current simulation time
    
    if (lastTime >= 0) { // Check if this is not the first execution
        dt = currentTime - lastTime;
    } else { dt = currentTime;}

        double integralPin = 0.0, integralPout = 0.0;
        if (dt > 0 && dt<0.1) { // Ensure dt is positive and not the first run and not exceeding the threshold
            integralPin = 0.5 * (currentPin + previousPin) * dt;
            integralPout = 0.5 * (currentPout + previousPout) * dt;
        } else {return 0;}
        
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

    double integralP = PowerIntegral(CLK,inputPower, outputPower);
    if (integralP != 0){ // check if the conditions is correct?

    return (1/Vd)*(Kp*(inputPower-outputPower))*(Ki*(integralP));

    } else {return 1;};
}


/*double VdrefCalc(double Idref, double Id, double Iq, double Iin, double Vin, double Iout, double Vout, double Vd) {
    double inputPower = getInPowerValue(Iin, Vin);
    double outputPower = getOutPowerValue(Iout, Vout);
    double integralP = PowerIntegral(Time,inputPower, outputPower);

    double Vdref = Kp * (Idref - Id) + Ki * integralP - (2 * pi * Iq * Lf) + Vd;
    return Vdref;
}*/
    
    
/*// Legacy Code for VdrefCalc();
double VdrefCalc(){ //Vd* calculation
double integralP = PowerIntegral(getInPowerValue(Iin,Vin),getOutPowerValue(Iout,Vout));
return Kp*(Idref-Id)+Ki*(integralP)-(2*pi*Iq*Lf)+Vd;
} */

/*bool datacheck (double Id, double Iq,double Vd){
    if(isNaN(Id) || isNAN(Iq) || isNAN(Vd)){
    return false;
    } else if (Id>IdHighThreshold ||Iq>IqHighThreshold || Vd>500){
        return false;}
        else if(Id<IdLowThreshold ||Iq<IqLowThreshold){
            return false;
        }
    else {return true;}
}*/


/*bool validateAllInputs(double input1, double input2, double input3) {
    if (!validateInput1(input1)) {
        return false;
    }
    if (!validateInput2(input2)) {
        return false;
    }
    if (!validateInput3(input3)) {
        return false;
    }
    return true;
}

bool validateIq(double Iq){
   
}

bool validateId(double Id){

}

bool validateVd(double Vd){

}  */