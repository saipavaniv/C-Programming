#include <stdio.h>
int main (void)
{
    int digits[2][3] = {{3,4,6},{1,5,9}};
    for(int r =0; r< 2;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d", digits[r][c]);
        }
        printf("\n\n ");
    }
    return 0;
}