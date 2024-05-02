#include <stdio.h>
int main (void)
{
    int A =0;
    int B =0;
    float avg = 0;

    printf("enter A %d");
    scanf("%d", &A);

    printf("enter B %d");
    scanf("%d", &B);

    avg = ((A+B)/2.0);

    printf("The average for the values given : %n", avg);

    return 0;

}