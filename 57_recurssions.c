#include <stdio.h>
int main(void)

{
    int array1[10];
    for (int i=0;i<10;i++)
    {
        printf("enter numbers which are to be stored in the array: ");
        scanf("%d",&array1[i]);
    }
    return 0;

}
    int printarr(int arr[], int start, int length)
    {
        if(start>=length)
        return 0;

        printf("%d",arr[start]);
        printarr(arr,start+1,length);

    }




