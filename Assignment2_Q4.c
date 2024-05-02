/*Pass an integer array consisting of five elements to a void function named
reverseCubeArray(). Modify the contents of the array in such a way that the original array
is reversed and the contents cubed by making use of a swapCube() function called within
reverseCubeArray(). The swapCube() function takes the pointer to two elements which
should be swapped so as to reverse the original array with its cube. You may use the pow( )
function defined in math.h*/

#include <stdio.h>
#include <math.h>

void swapCube( int *i, int *j)// function to swap two elements uding pointers 
{
    int temp;
    // to swap 2 elements in an array
    temp =  *i; 
    *i = *j;
    *j = temp; 

}

void reverseCubeArray(int arr[], int size)// function to reverse the array and cube the elements
{
    for (int i=0;i<size/2;i++)// we swap the elements in the mid point (as this will iterate through half of the array)
    {
        swapCube(&arr[i],&arr[size - i - 1]); // to swap the elements at position i and (size -i - 1)
        arr[i]=pow(arr[i],3);// this will cube the iterated digits
        arr[size - i -1] = pow(arr[size - i -1],3);// cube the swapped digits
    }
    }


int main (void)
{
    int size = 5;
    int arr[5];
    //gettting 5 numbers from the user
    for(int i =0;i<5;i++)
    {
        printf("enter 5 no. which are to be cubed and reversed: %d ",i);
        scanf("%d",&arr[i]);

    }
    reverseCubeArray(arr,size);// calling the function to reverse the array and cube its elements 
    arr[2]=pow(arr[2],3);// this is to cube the 3 element in the array 

    
     printf("the reversed and cubed number are:  ");
        for (int i = 0; i< size;i++)
        {
            printf("%d ",arr[i]);
        } 
    return 0;
}
    
    


    


