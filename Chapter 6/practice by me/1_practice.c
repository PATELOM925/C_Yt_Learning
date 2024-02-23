#include<stdio.h>

int main(){
    
    int i=7;
    int *j;
    j=&i;

     printf("The value of i is %d\n",i);
     printf("The value of j is %d\n",j);
     printf("The address of j is %d\n",&j);
     printf("The address of i is %d\n",&i);
     printf("The value of i is %d\n",*(&i));


    return 0;
}