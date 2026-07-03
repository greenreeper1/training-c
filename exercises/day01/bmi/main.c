#include <stdio.h>
#include <stdlib.h>
#include "bmi.h"

int main(void) {
    float weight = 65;
    float height = 1.75;
    float bmi = calculate_bmi(weight, height);
    printf("BMI : %f \n", bmi);
    display_bmi_category(bmi);
    return EXIT_SUCCESS;
}