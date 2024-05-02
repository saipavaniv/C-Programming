#include <stdio.h>
#include <string.h>

int main (void)
{
    char string1[5][35];
    char string2[1][30];
    for(int i=1;i<5;i++)
    {
        printf("enter the sentence which is to be checked in the string1: ");
        scanf("%d",&string1);
    }
    for (int i=1;i<2;i++)
    {
        printf("enter the word which is to be checked in the string2: ");
        scanf("%d",&string2);
    }
    int val=0;
    int position =0;
    for(int i=0;i<5;i++)
    {
        val=strcmp(string1[i],string2);
        if(val==0)
        {
            position = i;
            break;
        }

    }
    if(val==0)
    {
        printf("position : %d\n",position);
        printf("%s is in index of string1[%d] \n", string2,position);
    }
    return 0;

}