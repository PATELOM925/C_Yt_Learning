#include<stdio.h>

// calculate fibonacci sequence till nth elemnts
// n = (n-1) + (n-2)

int fib(int n);

int main(){
    
    int f;

         printf("Enter the fibonacci sequence till you want");
         scanf("%d",&f);

        printf("The %d th element is %d\n",f,fib(f));

    return 0;
}


int fib(int n)
{

    if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    
    else
    {
        return  fib(n-1) + fib(n-2);
    }
    


}