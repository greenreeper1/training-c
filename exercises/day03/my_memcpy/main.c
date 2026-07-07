#include <stdio.h>
#include <stdlib.h>
#include "my_memcpy.h"

int main(void) {
    char string1[] = "Hello";
    printf("String before memcpy : %s\n", string1);
    char string2[] = "World";
    printf("String after memcpy : %s\n", (char*) my_memcpy(string1, string2, 6));
    return EXIT_SUCCESS;
}