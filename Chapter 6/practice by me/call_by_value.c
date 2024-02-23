#include<stdio.h>


int sum (int a,int b);

int main(){
    int a=25;
    int b=22;

      printf("The value of 4+7 before function call is %d and %d\n",a,b);   // before function call
      printf("The value of 4+7 is %d\n",sum(a,b));
      printf("The value of 4+7 after function call is %d and %d\n",a,b);     //  after function call
    
    return 0;
}

int sum (int a,int b)
{
    int c;
    c=a+b;
    a = 1234;      //  whatver you tale a,b here you can't changhe va;lues of main()
    b = 2345;      //  by chanhging values of our function, WITHOUT USING POINTERS!!!
    return c;
}