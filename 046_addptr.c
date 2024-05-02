#include <stdio.h>

void ptrAddition(int*, float*, float*);

int main(void)
{
  int num1 = 10;
  float num2 = 15.3;

  float result = 0;

  ptrAddition(&num1, &num2, &result);

  printf("Result: %g \n", result);
  
  return 0;
}

void ptrAddition(int *ptr_x, float *ptr_y, float *ptr_r)
{
  *ptr_r = *ptr_x + *ptr_y;
  return;
}
