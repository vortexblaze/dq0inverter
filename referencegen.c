#include <math.h>
#include <referencegen.h>

double Prefcalc(double Id, double Ed)
{
  return maxdccurent*Ed;
}

double Idrefcalc( double integralDeltaP) {
    double Idref = (1 / Vd) * (Kp * error + Ki * integralDeltaP);
    return Idref;
}


double Vdrefcalc(double IntegraldeltaId, double iq, double Vd)
{
  return double Kp(deltaId)+KI(IntegraldeltaId)-(2*pi*Lf*Iq)+Vd;
}


double Vqrefcalc(double deltaP);{ //Vqref calculation
  return double Kp(deltaId)+KI(integral_term)-(2*pi*Lf*Iq)+Vd;
}