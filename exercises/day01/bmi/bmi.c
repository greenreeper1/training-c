#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculate_bmi(float weight, float height) {
    return weight / pow(height, 2);
}

void display_bmi_category(float bmi) {
    if (bmi < 16) {
        printf("Severe Thinness\n");
        return;
    }
     if (bmi < 17) {
        printf("Moderate Thinness\n");
        return;
    }
     if (bmi < 18.5) {
        printf("Mid Thinness\n");
        return;
    }
    if (bmi < 25) {
        printf("Normal\n");
        return;
    }
    if (bmi < 30) {
        printf("Overweight\n");
        return;
    }
    if (bmi < 35) {
        printf("Obese class I\n");
        return;
    }
    if (bmi < 40) {
        printf("Obese class II\n");
        return;
    }
    printf("Obese class III\n");
}