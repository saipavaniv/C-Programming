#include <stdio.h>
int main(void)
{
    char alpha = 'a';
    int num1 = 12;

    printf("Address of alpha: %p \n", &alpha); //%p : address in hex
    printf("address of num1 : %p \n", &num1);

    printf("sizeof(&alpha): %ld bytes \n", sizeof(&alpha));
    return 0; 
}// the answer depends on the device we're using, this question cant be asked in the exam because it varies with the device