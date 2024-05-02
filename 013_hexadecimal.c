#include <stdio.h>
int main (void)
{
    int decVal = 40765;
    printf("Hex: %x \n", decVal);
    printf("Hex: %X \n", decVal);

    printf("Hex: 0x%x \n", decVal);
    printf("Hex: 0X%X \n", decVal);
    return 0;
}