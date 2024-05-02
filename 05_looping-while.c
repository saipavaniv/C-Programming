#include <stdio.h>
float addition (int, float);
int main (void)
{
    int num1 =12;
    float num2 =13.5;

    printf("result: %d + %g = %g\n",
          num1, num2, addition(num1, num2));

          return 0;
}
float addition (int num1, float num2)
{
    return (num1 + num2);
}
