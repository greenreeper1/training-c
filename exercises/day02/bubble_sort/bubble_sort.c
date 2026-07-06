#include <stdio.h>
#include <stdbool.h>

void swap (int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int unsorted[], int length){
    int i, j;
    bool swapped = false;

    for(i = 0; i < length - 1; i++){
        swapped = false;
        for (j = 0; j < length - i - 1; j++){
            if (unsorted[j] > unsorted[j+1]){
                swap(&unsorted[j], &unsorted[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void print_array(int array[], int length){
    int i;
    printf("[");
    for (i = 0; i < length - 1; i++){
        printf("%d, ", array[i]);
    }
    printf("%d] \n", array[length - 1]);
}