#include <stdio.h>
int main(void)
{
    int n =0;
    int sume, sumo; // sum evan and sum odd

    printf("enter n : ");
    scanf("%d", &n);
    sume= 0;
    sumo = 0;


    for (int i = 1; i <= n; i++)
    {
        if((i%2)==0)
        {
            sume = sume + i;

        }
        else 
        {
            sumo += i;

        }
    }
    printf("sume: %d\n", sume);
    printf("sumo: %d\n", sumo);

    return 0;

}