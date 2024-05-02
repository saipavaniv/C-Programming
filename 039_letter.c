/*Write a C program to input any character and check whether it is alphabet, digit or special
character.*/

#include <stdio.h>
int main (void)
{
    char letter;

    printf("input a charater : ");
    scanf("%c",&letter);

    if((letter>='a' && letter<='z') || (letter>='A' && letter<='Z' ))
    {
        printf("it is a letter : %c ",letter);
    }
    else if(letter>='0' && letter<='9' )
    {
        printf("it is a number : %c",letter);
    }
    else 
    {
        printf("it is a special character: %c",letter);
    }
    return 0;
}