#include <stddef.h>
#include <stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void table_inversion(int array[], size_t length){
    size_t i;
    for (i = 0; i < length / 2; i++){
        swap(&array[i], &array[length - i - 1]);
    }
}

void print_array(int array[], int length){
    int i;
    if (length == 0){
        printf("[]\n");
    }
    printf("[");
    for (i = 0; i < length - 1; i++){
        printf("%d, ", array[i]);
    }
    printf("%d] \n", array[length - 1]);
}