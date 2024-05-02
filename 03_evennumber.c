#include <stdio.h>
int main(void)
{
    int i=0;
    for( i=0 ; i<10 ; i++ )
    {
        if((i % 2) == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0 ;
}