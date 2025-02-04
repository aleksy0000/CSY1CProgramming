#include <stdio.h>
#include <stdint.h>

uint16_t x = 0;

int main()
{
    //printf("%d\n",sizeof(uint8_t)); //uint removes uncertainty on how big the int will be.

    x = (2 << 1); //this way of assigning values makes more sense in binary.

    printf("%d\n", x);

    return 0;       
}