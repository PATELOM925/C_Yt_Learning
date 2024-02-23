// for genral multiplicatie table store

#include<stdio.h>

void table(int *arr,int num, int n);



int main(){
    
    int mult[3][10];

      table(mult[0],2,10);
      printf("\n");
      table(mult[1],7,10);
      printf("\n");
      table(mult[2],9,10);

    return 0;
}


void table(int *mult,int num, int n)
{
printf("The multiplication table of %d is: \n",num);
       for ( int i = 0; i < 10; i++)
   {
       mult[i] = (num)*(i+1);
   }


   for ( int i = 0; i < 10; i++)
   {
       printf("%d * %d = %d\n",num,i+1,mult[i]);
   }
   printf("\n*****************************************\n");
}