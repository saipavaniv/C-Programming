#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int *ptr = NULL;
    ptr =(int*) malloc(1* sizeof(int));
    printf("ptr: %p \n", ptr);
    *ptr = 22;

    return 0;
}