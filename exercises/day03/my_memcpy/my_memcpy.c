#include <stddef.h>

void* my_memcpy(void* dest, const void* src, size_t count){
    size_t i;
    char* result = dest;
    const char* source = src;
    for(i = 0; i < count; i++){
        *result = *source; // copy memory
        result++; // Move up to 1 character (= 1 byte)
        source++;
    }
    return dest;
}