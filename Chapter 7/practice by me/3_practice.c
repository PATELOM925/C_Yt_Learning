#include<stdio.h>

// array of 10 integers to store multiplication of table 5

int main(){

    int mult[10];
    int number;

        printf("enter the number for which you want table : ");
        scanf("%d",&number);

   for ( int i = 0; i < 10; i++)
   {
       mult[i] = (number)*(i+1);
   }

   for ( int i = 0; i < 10; i++)
   {
       printf("%d * %d = %d\n",number,i+1,mult[i]);
   }
   
   

    return 0;
}