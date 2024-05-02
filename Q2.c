#include <stdio.h>
int main(void)
{
    //initializing array
    int set1[4];
    int set2[4];
    int intersection[4];
    int difference[4];
    int i, j, k=0;
    int uni[8];
    int set_union=0;
    int set_intersection=0;
    int set_difference=0;

// read values for set 1
    for(i=0;i<4;i++)
    {
        printf("enter the value of set1 ");
        scanf("%d",&set1[i]);
        if(set1[i]==0)// check if the number entered is zero
        {
            printf("Zeros are not allowed in the program. please enter a non zero number: ");
            i--;// this will decrement i to re enter the value for the current index
        }
    }
    
    //read values for set 2
    for(i=0;i<4;i++)
    {
        printf("enter the value of set2 ");
        scanf("%d",&set2[i]);
        if(set2[i]==0)// check if the number entered is zero
        {
            printf("Zeros are not allowed in the program. please enter a non zero number: ");
            i--;// this will decrement i to re enter the value for the current index
        }
    
    }
    
    // find the union of both the sets
    int common = 0;
    for(i = 0; i<4; i++)
    {
        uni[i]=set1[i];
        set_union++;
    }
    for (i = 0; i < 4; i++)
    {
        int dup = 0; // 1  to check for duplicate values in union
        for (j = 0; j < set_union; j++)
        {
            if (set2[i] == uni[j])
            {
                dup = 1;
                break;
            }
        }
        if (!dup)//if its not duplicate, the number is added to uni
        {
            uni[set_union] = set2[i];
            set_union++;// 
        }
    }

    
printf("the union of both the set : ");
for(int i=0;i<set_union;i++)
{
    printf("%d",uni[i]);
}

 printf ("\n\t");

    //to find the intersection of the sets
    for (int i=0; i<4; i++)//this iterates for set1
    {
        for (int j=0; j<4; j++)//this iterates for set2
        {
            if (set1[i]==set2[j])// if the element is similar it will be added to intersection 
            {
                intersection[set_intersection]=set1[i];
                set_intersection++;
            }
        }
    }

    //displaying the intersection
    printf("The intersection of both the sets: : ");
    for(int i=0; i<set_intersection; i++)
    {
        printf("%d\t",intersection[i]);
    }
    printf ("\n");


    printf ("\n");

    //to find the difference of set1 
    for(int i=0;i<4;i++)
    {
        int common=0;
        for(int j=0;j<4;j++)
        {
            if(set1[i]==set2[j])
            {
                common=1;
                break;
            }
        }
        if(common!=1)
        {
            difference[set_difference]=set1[i];
            set_difference++;
        }
    }
    
    //displaying the difference
    printf("the difference is : ");

    for(int i=0;i<set_difference;i++)
        printf("%d\t",difference[i]);
    
    printf ("\n");

    return 0;
}