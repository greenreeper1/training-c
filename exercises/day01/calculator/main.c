#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main(void)
{
    int a = 2;
    int b = 5;
    printf("sum: %i \n", add(a, b));
    printf("substract: %i \n", substract(a, b));
    printf("multiply: %i \n", multiply(a, b));
    printf("divide: %i \n", divide(a, b));
    return EXIT_SUCCESS;
}