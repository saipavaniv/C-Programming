#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    typedef struct
    {
        float x;
        float y;
    }
    points;

    typedef steuct
    {
        char alpha;
        int num;
        float val;
        double dArray[3];

        points p1, *ptr;
    } collections;

    collections C1;
    C1.alpha = 'b';
    C1.num = 15;

    printf("enter the C1.val: ");
    scanf("%f",&C1.val);

    C1.dArray[0]=11;

    for(i=1;i<3;i++)
    C1.ptr=&C1.p1;

C1.p1.x=10.4;
C1.ptr->=13.2;

printf("C1.apl: %c c1 alp: %g, c1.n c1p: %g\n", j);



