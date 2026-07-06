#include <stdio.h>
#include <stdlib.h>
#include "search.h"

int main(void) {
    int values[] = {51, 3, 42, 666, 69, 67, 156, 41, 238 ,7452, 5, 1452, 7582};
    int length = sizeof(values) / sizeof(values[0]);
    printf("42 is at position : %i \n", search(values, length, 42));
    printf("2 is at position : %i \n", search(values, length, 2));
    printf("5 is at position : %i \n", search(values, length, 5));

    return EXIT_SUCCESS;
}