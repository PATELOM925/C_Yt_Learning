#include<stdio.h>

// sum of first n nos.

float sum(int n);

int main(){

    int a;
       printf("Enter the n");
           scanf("%d",&a);

       printf("The sum of %d natural number is %f\n", a ,sum(a));
    
    return 0;
}

float sum(int n)
{
    int y;
    y = (n*(n+1))/2;
    return y;
}