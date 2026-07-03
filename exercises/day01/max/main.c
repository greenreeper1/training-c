#include <stdio.h>
#include <stdlib.h>
#include "max.h"

int main (void) {
    int a = 5;
    int b = 8;
    int c = 7;
    printf("Max is %i \n", max_of_three(a, b ,c));
    return EXIT_SUCCESS;
}