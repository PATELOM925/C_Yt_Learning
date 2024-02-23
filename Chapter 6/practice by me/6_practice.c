#include<stdio.h>
// call by value
int change(int a);

int main(){
    int i;
     printf("The value of i is : \n");
     scanf("%d",&i);

    
    printf("The value of 10 * %d is : %d \n",i,change(i));

    
    return 0;
}


int change(int a)
{
  int b;
  b=a*10;
  a=15;
  return b;
}

