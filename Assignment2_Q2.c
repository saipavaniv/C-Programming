/*Read two strings str1 and str2 from the user. Dynamically allocate 32 bytes using malloc
function to str1 and str2 . A new string str3 should concatenate the first-half of str1 and
second-half of str2. The size of str3 should be estimated in runtime and allocated
sufficient memory dynamically to hold relevant parts of str1 and str2. The concatenated
strings should perfectly reside in str3 and no memory should be wasted.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//function to concatenate the first half of str1 and second half of str2
char *string(char *str1, char *str2)
{
    int len1;
    int len2;
    len1 = strlen(str1);//to calculate the length of str1
    len2 = strlen(str2);//to calculate the length of str2

    int first = len1 / 2;//to find the length of the first half of str1
    int second = len2 - (len2/2);//to find second half of str2

    char *str3 = (char *)malloc((first + second + 1) *sizeof(char));//this will allocate memory for str3 to holf concated string

    if(str3 == NULL)//check if the memory allocation for str3 is successful
    {
        printf("allocation failed  \n");
        return NULL;
    }
    strncpy(str3, str1, first);
    strncpy(str3 + first, str2 +(len2/2), second);
    str3[first + second] = '\0';

    return str3;
}

int main (void)
{
    //this will allocate 32 bytes for str1 and str2 
    char *str1 = (char *)malloc(32 * sizeof(char));
    char *str2 = (char *)malloc(32 * sizeof(char));

    printf("enter letters which is to be stored in str1: ");
    scanf("%s",str1);

    printf("enter letters which is to be stored in str2: ");
    scanf("%s",str2);

    char *str3 = string(str1, str2);//calling the function to concate strings str1, str2

    if(str3 != NULL)
    {
        printf("concatenated string : %s\n", str3);
        free(str3);// free dynamically alloted memories for str3, str1, str2
    }
    free(str1);
    free(str2);

    return 0;

}