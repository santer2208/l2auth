#ifndef L2AUTH_HEX_C
#define L2AUTH_HEX_C

#include <stdlib.h>

void hex_generate(unsigned char* dest, size_t size)
{
        for (size_t i = 0; i < size; i++) {
                dest[i] = (unsigned char) rand();
        }
}

#endif