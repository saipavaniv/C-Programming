#include <stdio.h>
int main (void)
{
    char letter;
    printf("enter the letter: ");
    scanf("%c",&letter);
    if(letter ==('a','e','i','o','u')|| letter ==('A','E','I','O','U'))
    {
        goto case : 1;
    }
    else
    {
        goto case 2;
    }
    switch(letter)
    case : 1
    {
        printf("the letter is a vowel");
        break;
    }
    case : 2
    {
        printf("the letter is a vowel");
        break;
    }
return 0;
}