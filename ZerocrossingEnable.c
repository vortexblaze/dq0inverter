#include <Zerocrossingenable.h>;
double THRESHOLD = 0;

bool detectZeroCrossing(double lastSample, double currentSample) {
    // Check if the last sample and the current sample straddle zero
    if ((lastSample > THRESHOLD && currentSample <= THRESHOLD) ||
        (lastSample < THRESHOLD && currentSample >= THRESHOLD)) {
        return true; // Zero crossing detected
    }
    return false; // No zero crossing detected
}