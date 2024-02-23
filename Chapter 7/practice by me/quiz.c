#include<stdio.h>
#define o 2
#define k 3


void display(int a[o][k]);

int main(){

     int a[o][k];
     printf("Enter the data in %d * %d\n",o,k);

     display(a);
  

    return 0;
}

void display(int a[o][k])
{
    int i , j;

    for ( i = 0; i < o; ++i)
    {
        for ( j = 0; i < k; ++j)
        
        {   
            scanf("%d",&a[i][j]);
        
            printf("%6d",a[i][j]);
        if (j==2){
            printf("\n");
        }
        }
        
    }
    
}

