#include <stdio.h>
int Evennumbers(int array1[], int evenarray[])
{

    int count=0;
    for (int i=0;i<5;i++)
    {
        printf("Please enter 5 numbers: ");
        scanf("%d",&array1[i]);

        if (array1[i] % 2 ==0)
        {
            evenarray[count] = i; // this will store index of the even numbers 
            count++;
        }
        
    }
    printf("the index of the even numbers stored in the array1: ");
     for (int i = 0; i<count;i++)
     {
        printf("%d",evenarray[i]);
        printf("\n");
        }
     return count;
}

        int main(void)
        {
            int array1[5];
            int evenarray[5];
            int count = Evennumbers(array1, evenarray);
            return 0;
        }



