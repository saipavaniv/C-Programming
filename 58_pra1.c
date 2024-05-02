//Write a C program to find second largest element in an array.
#include <stdio.h>
int main (void)
{
    int array[]=0;
    int n;
    int max=0;
    int smax=0;

    printf("enter the size of the array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the elements: ");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<10;i++)
    {
        if (array[i]>max)
         max=array[i];
    }
    for(int j=0;j<10;j++)
    {
        if(array[j]<max && array[j]>smax)
         smax=array[j];
    }
    return smax;
    return max;

    printf("the second largest number is in the given series: %d",smax);

    return 0;


}