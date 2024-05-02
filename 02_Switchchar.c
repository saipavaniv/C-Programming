#include <stdio.h>
int main(void)
{
    char alpha = 0;
    int num1 =0, num2 = 0;
    int result = 0;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    printf("enter char 'a','s','m','d': ");
    scanf("%c", &alpha);
    
    printf("num1 : %d, num2 %d, operation : %c\n", 
         num1, num2, alpha );

    switch(alpha)
    {
        case 'a':
        result = num1 + num2;
        printf("%d + %d = %g \n", num1, num2, result);
        break;
        
        case 's':
        result = num1 - num2;
        printf("%d - %d = %g \n", num1, num2, result);
        break;

        case 'm':
        result = num1 * num2;
        printf("%d * %d = %g \n", num1, num2, result);
        break;

        case 'd':
        result = num1 / num2;
        printf("%d / %d = %g \n", num1, num2, result);
        break;

        default:
        printf("invalid operation\n");
    }
     return 0;
}





   

