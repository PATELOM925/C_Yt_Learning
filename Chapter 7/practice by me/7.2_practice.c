// for genral user multiplicatie table store

#include<stdio.h>

void table(int *arr,int num, int n);


int main(){
    int m,n;
    int mult[100][100];

    printf("\n Enter the size of row : ");
    scanf("%d",&m);

    printf("\n Enter the size of row : ");
    scanf("%d",&n);


    for (int i = 0; i < m; i++)
    {
        table(mult[0],i,n);
      printf("\n");
    }
    
      
      
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