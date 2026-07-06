#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_strlen.h"

int main(void) {
    char* strings[] = {"test", "test test", "", NULL, "test ! test??\n"};
    int length = sizeof(strings) / sizeof(strings[0]);
    int i;
    for (i = 0; i < length; i++){
        printf("my strlen : Size of %s is : %zu \n", strings[i], my_strlen(strings[i]));
        
        if (strings[i] != NULL){
            printf("strlen : Size of %s is : %zu \n", strings[i], strlen(strings[i]));
        }
    }
    return EXIT_SUCCESS;
}