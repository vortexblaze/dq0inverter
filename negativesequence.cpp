#include <negativesequence.h>;


std::complex<double> PolarToRectangular(double magnitude, double angleRadians) {
    double real = magnitude * cos(angleRadians);
    double imag = magnitude * sin(angleRadians);
    return std::complex<double>(real, imag);
}

std::complex<double> NegativeSequenceVa(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc) {
    const std::complex<double> a = std::exp(std::complex<double>(0, 2.0 * M_PI / 3.0)); //Activate when used standalone.

    // Use std::pow from the C++ standard library
    std::complex<double> V_negative = (Va + std::pow(a, 2) * Vb + a * Vc) / 3.0;

    return V_negative;
}

std::complex<double> NegativeSequenceVb(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc) {
    const std::complex<double> a = std::exp(std::complex<double>(0, 2.0 * M_PI / 3.0)); //Activate when used standalone.

    // Use std::pow from the C++ standard library
    std::complex<double> V_negative = (Vb + std::pow(a, 2) * Vc + a * Va) / 3.0;

    return V_negative;
}

std::complex<double> NegativeSequenceVc(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc) {
    const std::complex<double> a = std::exp(std::complex<double>(0, 2.0 * M_PI / 3.0)); //Activate when used standalone.

    // Use std::pow from the C++ standard library
    std::complex<double> V_negative = (Vc + std::pow(a, 2) * Va + a * Vb) / 3.0;

    return V_negative;
}

std::pair<double, double> RectangularToPolar(const std::complex<double>& rect) {
    double magnitude = std::abs(rect);
    double angleRadians = std::arg(rect);
    return std::make_pair(magnitude, angleRadians);
}

std::pair<double, double> NegSeqVaGen (double magnitudeA ,double angleRadiansA ,double magnitudeB,double angleRadiansB,double magnitudeC,double angleRadiansC){
    std::complex<double> ComplexVR = std::complex<double> PolarToRectangular( magnitudeA, angleRadiansA);
    std::complex<double> ComplexVY = std::complex<double> PolarToRectangular( magnitudeB, angleRadiansB);
    std::complex<double> ComplexVB = std::complex<double> PolarToRectangular( magnitudeC, angleRadiansC);

    std::complex<double> VoltageNegativeSequenceVa = NegativeSequenceVa(ComplexVR, ComplexVY, ComplexVB);

    return RectangularToPolar(VoltageNegativeSequenceVa);
}

std::pair<double, double> NegSeqVbGen (double magnitudeA ,double angleRadiansA ,double magnitudeB,double angleRadiansB,double magnitudeC,double angleRadiansC){
    std::complex<double> ComplexVR = std::complex<double> PolarToRectangular( magnitudeA, angleRadiansA);
    std::complex<double> ComplexVY = std::complex<double> PolarToRectangular( magnitudeB, angleRadiansB);
    std::complex<double> ComplexVB = std::complex<double> PolarToRectangular( magnitudeC, angleRadiansC);

    std::complex<double> VoltageNegativeSequenceVb = NegativeSequenceVa(ComplexVR, ComplexVY, ComplexVB);

    return RectangularToPolar(VoltageNegativeSequenceVb);
}

std::pair<double, double> NegSeqVcGen (double magnitudeA ,double angleRadiansA ,double magnitudeB,double angleRadiansB,double magnitudeC,double angleRadiansC){
    std::complex<double> ComplexVR = std::complex<double> PolarToRectangular( magnitudeA, angleRadiansA);
    std::complex<double> ComplexVY = std::complex<double> PolarToRectangular( magnitudeB, angleRadiansB);
    std::complex<double> ComplexVB = std::complex<double> PolarToRectangular( magnitudeC, angleRadiansC);

    std::complex<double> VoltageNegativeSequenceVc = NegativeSequenceVa(ComplexVR, ComplexVY, ComplexVB);

    return RectangularToPolar(VoltageNegativeSequenceVc);
}