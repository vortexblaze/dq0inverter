#include <negativesequence.h>;

std::complex<double> NegativeSequenceVa(std::complex<double> Va, std::complex<double> Vb, std::complex<double> Vc) {
    const std::complex<double> a = std::exp(std::complex<double>(0, 2.0 * M_PI / 3.0));

    // Use std::pow from the C++ standard library
    std::complex<double> V_negative = (Va + std::pow(a, 2) * Vb + a * Vc) / 3.0;

    return V_negative;
}

/*_complex double NegativeSequenceVb(complex double Va,complex double Vb,complex double Vc){

      // Phase shift operator a, which is e^(j*120°)
    complex double a = cexp(I * 2.0 * M_PI / 3.0);

    // Calculate the negative sequence component
    complex double V_negative = (Vb + cpow(a, 2) * Vc + a * Va) / 3.0;

    return V_negative;
    
_complex double NegativeSequenceVc(complex double Va,complex double Vb,complex double Vc){

      // Phase shift operator a, which is e^(j*120°)
    complex double a = cexp(I * 2.0 * M_PI / 3.0);

    // Calculate the negative sequence component
    complex double V_negative = (Vc + cpow(a, 2) * Va + a * Vb) / 3.0;

    return V_negative;
    
}*/