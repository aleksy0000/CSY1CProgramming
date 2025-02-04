#include <stdio.h>
#include <stdint.h>

uint8_t x;

void printBinary(uint8_t b)
{
    int bitnumber;
    for(bitnumber = 0; bitnumber < 8; bitnumber++)
    {
        if(b & 0b10000000)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        b = b << 1;
    }
}

int main()
{
    x = 47;
    x = x & ~(1 << 2);
    printBinary(x);
}