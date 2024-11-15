#include <stdio.h>

int main()
{
    char L1 = 'e';
    char L2 = 'n';
    char L3 = 'g';
    char L4 = 'i';
    char L5 = 'n';
    char L6 = 'e';
    char L7 = 'e';
    char L8 = 'r';
    char geuss;

    printf("Geuss the 8 letter word!\n");
    scanf("%c", geuss);

    if(geuss == 'e')
    {
        printf("%c____%c%c_", L1, L6, L7);
    }
}