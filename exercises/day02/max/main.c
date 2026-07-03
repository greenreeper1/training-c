#include <stdio.h>
#include <stdlib.h>
#include "max.h"

int main(void) {
    int values[] = {42, 69, 67, 211458, 103254, 15145, 5, 1456, 741, 1323};
    int length = sizeof(values) / sizeof(values[0]);
    printf("Max : %i", max(values, length));
    return EXIT_SUCCESS;
}