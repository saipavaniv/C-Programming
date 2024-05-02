#include <stdio.h>

int main() {
    long int x=0;
    int rem=0;
    int count=0;
    int count_3=0;
    int pos=0;
    printf("Welcome to program. Enter a number to check: ");
    scanf("%ld",&x);
    long int y=x;
    printf("%ld\n",y);
    if(x>0){
        for(;x>=0;x/=10){
           
     count++;}
     if(count==5||count==6||count==7||count==8){ 
        printf("Working");
        for(pos=(count-1);y>=0;pos--){
        int f=y%10;
        if (f==3){
        count_3++;
        }
        else
        { count_3 = 0;
            continue;}
            y=y/10;
        }
for(int i=0; i<=0;i++){
        if(count_3==3){
            printf("Contains consecutive threes starting at position: %d", pos);
            break;
        }
        else{
            printf("No consecutive threes found\n");
        }
     
        printf("No of threes: %ld Position:%d",count_3,pos);
    
     }
     }
    
    else{
    printf("not in range");
}
}

    else
    {printf("Negative number entered");}
     
     
    return 0;
}