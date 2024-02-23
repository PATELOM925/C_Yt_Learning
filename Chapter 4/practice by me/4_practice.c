// sum 1st 10 natural num using while loop
#include<stdio.h>

int main(){
    
    int i = 0;
    int n=10;
    int sum=0;


//// usinf for loop
    // for (int i = 0; i<=n; i++)
    // {
    //     sum +=i;
    // }

 
 
 ////using while loop
    while (i<=n)
    {
        sum +=i;
        i++;

    }
    
    printf("Sum of 1st 10 naturl numbers is sum(1 to 10) %d\n", sum);
    
    

    return 0;
}