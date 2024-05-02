#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char str1 [50] = "computer";
    char str2 [50] = "science";

     strncpy(str1, str2, 4);
     printf("string is  %c ",str1);
     return 0;
}


