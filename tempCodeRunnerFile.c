/*Read an integer array of size 5 from the user. Write a function that takes two arrays as
arguments. The first argument is the original array, and the second argument an empty array
of size 5. Inside the function, the empty array should be populated with the index of the
original array whose element is an even number. The function should keep track of how
many even numbers are present in the original array and return that count. In the main
function, print the second array which holds the indices of the original array.*/

#include <stdio.h>

//function to process the original array and to populate the index array 
int Evennumbers(int array1[], int evenarray[])
{

    int count=0;//to keep track of even numbers found
 
    {
        //obtaining digits from the user
        printf("even numbers found in the original array: ");
        for (int i=0;i<5;i++)
       {
            if (array1[i] % 2 ==0)//condition to check if the number is even
           { 
            evenarray[count] = i; // this will store index of the even numbers 
            printf("%d ",array1[i]);
            count++;//increment count of the even numbers 
          }
        
        }
        printf("\n");
        
    }
    printf("the index of the even numbers stored in the array1: ");
     for (int i = 0; i<count;i++)
     {
        printf("%d",evenarray[i]);// this will print the index of the even number 
        printf("\n");
        }
     return count;// to return count of the even numbers found 
}

        int main(void)
        {
            int array1[5];//original array to store 5 elements 
            int evenarray[5];// to store the index of even numbers obtained from the user 
            printf("please enter 5 numbers : ");
            for (int i =0;i<5;i++)
            {
                scanf("%d",&array1[i]);
            }
            int count = Evennumbers(array1, evenarray);// calling the function to find the even numbers and their index
            return 0;
        }



