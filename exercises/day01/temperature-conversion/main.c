#include <stdio.h>
#include <stdlib.h>
#include "temperature.h"

int main(void) {
    float celsius = 25;
    float fahrenheit = celsius_to_fahrenheit(celsius);
    printf("Fahrenheit : %f \n", fahrenheit);
    printf("Celsius : %f \n", fahrenheit_to_celsius(fahrenheit));
    return EXIT_SUCCESS;
}