#include <stdio.h>
#include <math.h>

// function prototype (creating a function(for arrays) for 6 problems mentioned in qn)
int maximum(int age[]);
int minimum(int age[]);
int second_smallest(int age[]);
int second_largest(int age[]);
float mean(int age[]);
float standard_deviation(int age[]);

//main function
int main(void) //initializing variables neede for the program
{
    int Age[10];//initializing an array age consisting 10 elements as said in qn
    int max=0;
    int min=0;
    int secMin=0;
    int secMax=0;
    float Mean=0;
    float std=0;
    int i;

    for(i=0;i<10;i++) // to iterate the value of the digits inputted 
     {
         printf("Enter 10 digits within the range 1-125: ",i);
         scanf("%d",&Age[i]); 

         if(Age[i]>125 || Age[i]<1)// checks the condiditon if the number is within the specified range 
         {
             printf("Entered no is invalid: Please enter a no within the range 1-125: ",i);
             scanf("%d",&Age[i]);
         }
     }
     max=maximum(Age);// calling and returning the function 'maximum'
     printf("\nMaximum=%d",max);

     min=minimum(Age);// calling and returning the function 'minimum'
     printf("\nMinimum= %d",min);

     Mean=mean(Age);// callling and returning the function 'mean'
     printf("\nMean= %g",Mean);

     std= standard_deviation(Age);// callling and returning the function 'standard_deviation'
     printf("\nStandard Deviation=%g",std);

     secMin=second_smallest(Age);// callling and returning the function 'second_smallest'
     printf("\nSecond Smallest=%d",secMin);

     secMax=second_largest(Age);// calling and returning the function 'second_largest'
     printf("\nSecond Largest=%d",secMax);
     
    return 0;
}
int maximum(int age[])// to find the maximum value in the array age
{
    int max=0;
    for(int i=0;i<10;i++)
    {
        if (age[i]>max)
         max=age[i];
    }
    return max;
}
int minimum(int age[])// to find the minimum value in the array age
{
    int min=126;// minAge is intialized to a higher value than the expected range
    for(int i=0;i<10;i++)
    {
        if (age[i]<min)
         min=age[i];
    }
    return min;
}
float mean(int age[])// to find the mean value in the array age
{
    float mean=0,m=0;
    for(int i=0;i<10;i++)
     m+=age[i];// to add the digits entered 
    mean=m/10;
    return mean;
}
int second_smallest(int age[])// to find the second smallest value in the array age
{
    int min=126;
    int smin=126;
    for(int i=0;i<10;i++)
     {
         if(age[i]<min)
          min=age[i];
     }
    for(int j=0;j<10;j++)
    {
        if(age[j]>min && age[j]<smin)//
         smin=age[j];
    }
    return smin;
}
int second_largest(int age[])// to find the second largest value in the array age
{
    int max=0;
    int smax=0;
    for(int i=0;i<10;i++)
    {
        if(age[i]>max)
         max=age[i];
    }
    for(int j=0;j<10;j++)
    {
        if(age[j]<max && age[j]>smax)
         smax=age[j];
    }
    return smax;
}
float standard_deviation(int age[])// to find the standard deviation value in the array age
{
    float mean=0,m=0,std=0;
    for(int i=0;i<10;i++)
    {
         m+=age[i];
    }
     
    mean=m/10;
    for(int j=0;j<10;++j)
    {
        std+=pow((age[j]-mean),2);//
    }
    return sqrt(std/10);
}