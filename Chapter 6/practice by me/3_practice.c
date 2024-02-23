#include<stdio.h>
// call by reference
int change(int *a);

int main(){
     int i;
     printf("The value of i is : \n");
     scanf("%d",&i);

     int *a=&i;

     printf("The current value of i is %d\n",i);

    change (a);
     printf("The address of i is %u\n",&i);
     printf("The value of i is %d\n",*(&i));
     printf("The value of i is %d\n",i);

    return 0;
}

int change(int *a)
{
 return (*a)*=10;
  
}