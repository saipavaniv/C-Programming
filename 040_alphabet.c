//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
int main (void)
{
    char letter;
    
    printf("enter a letter: ");
    scanf("%c",&letter);

    if((letter == ( 'a','e','i','o','u')) || (letter ==('A','E','I','O','U')))
    {
        printf("%c is a vowel ",letter);

    }
    else 
    {
        printf("%c is a consonant ", letter);
    }
    return 0;
}