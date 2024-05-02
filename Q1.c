
#include <stdio.h>

int main()
 {
    int numA[8]; 
    int numDig = 0; // To save the number of digits obtained from the user 
    int count = 0; 
    int position = 0; // To store the starting position of the first '3' in the sequence.
    // Get input from the user
    long num;
    printf("Enter a positive number (between 5 and 8 digits): ");
    scanf("%ld", &num);
    // check if the number is positive 
    if (num < 0) 
    {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }
    // this part is to reverse the number and store its digits in the array numDigit(this is count no. of digits)
    while (num > 0)
     {
        int digit = num % 10;
        numA[numDig] = digit;
        numDig++;
        num /= 10;
    }

// Check if the number of digits is within the specified range 
    if (numDig < 5) 
    {
        printf("Error: The number has less than 5 digits.\n");
    }
    else if (numDig > 8) 
    {
        printf("Error: The number has more than 8 digits.\n");

    }


    // Check for three consecutive '3's
    for (int i = 0; i < numDig - 2; i++) /*Subtract 2 from the index, this is to make sure that there are 2 digits 
    left after i otherwise the program won't run*/ 

    { 
        if (numA[i] == 3 && numA[i + 1] == 3 && numA[i + 2] == 3) 
        {
            position = numDig - i - 2; // Subtract 2 for the correct starting position (again the same logic)
            count = 3; // We found three consecutive '3's
            break;
        }
    }

    if (count == 3)// this will check if count has 3 == 3
     {
        printf("The number contains three consecutive 3's  %d.\n");
        printf("the three consecutive 3's start at %d position\n ",position);
    } 
    else
     {
        printf("The number does not contain three consecutive 3's.\n");
    }

    return 0;
}
