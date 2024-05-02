#include <stdio.h>
int main (void)
{
    int a;
    int b;
    int c;

    printf("enter a ");
    scanf("%d",&a);

    printf("enter b ");
    scanf("%d",&b);

    printf("enter c ");
    scanf("%d",&c);

    if(a==b && b==c)
    {
        printf("it is equi");

    }
    
    else if(a==b || a==c || b==c )
    {
        printf("it is isos");
        
    }
    
    else
    {
        printf("it is scal");
        
    }
    return 0;
}