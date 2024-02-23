#include<stdio.h>

int main(){

    int a=25321;
    int *b;
    int **c;
    b=&a;
    c=&b;

    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    printf("The value of c is %d\n\n\n",c);
       
       printf("The value of a is %d\n",&a);
       printf("The value of b is %d\n",&b);
       printf("The value of c is %d\n\n\n",&c);

           
          printf("The value of a is %d\n",*(&a));
          printf("The value of b is %d\n",*(&b));
          printf("The value of c is %d\n\n\n",*(&c));

               printf("The value of a is %d\n",a);
               printf("The value of b is %d\n",*b);        //* is used to get value from addresses
               printf("The value of c is %d\n\n\n",**c);
  

    return 0;
}