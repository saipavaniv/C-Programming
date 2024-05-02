#include <stdio.h>
int main (void)
{
    
int checkODD(int number) {
    return (number % 2 == 1) ? 1 : 0;
}

int calcSQUARE(int number) {
    return number * number;
}

int main() {
    int numbers[5] = {0};
    int squares[5];

    int startValue = 101;
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (checkODD(startValue)) {
            numbers[i] = startValue;
            squares[i] = calcSQUARE(startValue);
            count++;
        }
        startValue += 2;
    }

    printf("Numbers Array: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Squares Array: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", squares[i]);
    }
    printf("\n");

    return 0;
}

}