#include <stdio.h>
#include <stdlib.h>
#include "min.h"

int main(void) {
    int values[] = {5, 75, 98, 41, 2, 54, 46, 97, 3254, 7, 351, 957852};
    int length = sizeof(values) / sizeof(values[0]);
    printf("Min : %i", min(values, length));
    return EXIT_SUCCESS;
}