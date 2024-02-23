#include<stdio.h>
  
void address(int a);

int main(){
    int i =7;

    printf("The value of variable i is %d\n",i);
    address(i);
    printf("The address of variable i is %u\n",&i);
   

    return 0;
}

void address(int a)
{
    printf("The address of a is %u\n",&a);
    
}

// both i & a have different addresses
