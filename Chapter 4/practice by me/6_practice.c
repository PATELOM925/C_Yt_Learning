// to find factorial of any number 

#include<stdio.h>

int main(){
    
    int factorial=1;
    int n;
     printf("Enter value of n");
     scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        factorial *=i;
        
    }
    
    printf("the factorial of %d is %d\n",n,factorial);

    return 0;
}