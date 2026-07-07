#include <stdio.h>
#include <stdlib.h>
#include "table_inversion.h"

int main (void){
    int array[] = {12, 45, 78, 1, 3, 54, 69, 795, 65489, 5145};
    size_t length = sizeof(array) / sizeof(array[0]);
    table_inversion(array, length);
    print_array(array, length);
    return EXIT_SUCCESS;
}