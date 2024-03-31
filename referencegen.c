#include <math.h>
#include <referencegen.h>

double getPowerValue (){



}

while (1) { // Main loop (adjust condition if needed)
        double current_Pin, current_Pout;

        get_current_values(&current_Pin, &current_Pout);

        if (current_Pin != previous_Pin || current_Pout != previous_Pout) {
            // Input has changed, calculate integrals 
            integral_Pin += previous_Pin * dt; 
            integral_Pout += previous_Pout * dt;

            // Optionally Output Values (or use them in your control logic)
            printf("Integral of Pin:  %f\n", integral_Pin);
            printf("Integral of Pout: %f\n", integral_Pout);
        }

