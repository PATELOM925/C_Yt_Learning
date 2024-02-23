#include<stdio.h>

int sum(int a,int b);      //func prototype declaration
                           // this means SUM is a function which takes input in a & b and 
                           // returns an integer nas an output

int main(){
    int result;
    result = sum(25,22);   // function call
    printf("The value of c is %d\n",c);

    return 0;
}

int sum(int a, int b)
{
 int c; 
 c = a + b;
 return c;
}