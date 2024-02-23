#include<stdio.h>


// to print n natural number 
int main(){
    int n ;
    printf("Enter value of n");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        printf("the n number is %d\n",i);
    }
    
    return 0;
}