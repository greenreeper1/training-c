#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(void){
    int unsorted[] = {64, 34, 25, 12, 22, 11, 90, 2, 54 ,42, 78, 66, 34};
    int length = sizeof(unsorted) / sizeof(unsorted[0]);
    bubble_sort(unsorted, length);
    printf("Sorted array : \n");
    print_array(unsorted, length);
    return EXIT_SUCCESS;
}