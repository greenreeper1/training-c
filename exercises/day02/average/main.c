#include <stdio.h>
#include <stdlib.h>
#include "average.h"

int main(void) {
    float values[] = {12, 45.2, 4.98, 18.7123, 5, 69.6776};
    int length = sizeof(values) / sizeof(values[0]);
    printf("Average : %f \n", average(values, length));
    return EXIT_SUCCESS;
}