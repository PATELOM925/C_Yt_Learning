#include<stdio.h>

int main(){
    
    int a;
        printf("enter a number\n");
        scanf("%d",&a);
             // termary operators "?" & ":"
        (a<10) ? printf("A is less than 10\n") : printf("A is greater than 10 \n");
             // USE ONLY for one liner 
    return 0;
}