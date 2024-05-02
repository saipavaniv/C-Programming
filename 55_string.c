#include <stdio.h>
int main(void)
{
    char array1[10] = {'p','r','o','g','a','m'};
    char string1[10]= {'p','r','o','g','a','m','\0'};
    char string2[10]="program";
    
    for(int i=0;i<10;i++)
    printf("%d",string1[i]);
    printf("\n");

    for(int i=0;i<10;i++)
    printf("%c",string1[i]);
    printf("\n");
return 0;
}