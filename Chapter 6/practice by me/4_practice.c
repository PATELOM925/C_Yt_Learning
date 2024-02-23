#include<stdio.h>

void sumANDavg(int a,int b,int *sum , float *avg);

int main(){
    int i,j,sum;
    float avg;

     printf("The value of i is : \n");
          scanf("%d",&i);
     printf("The value of j is : \n");
          scanf("%d",&j);

    sumANDavg(i,j,&sum,&avg);\
     printf("The value of sum is : %d \n",sum);
     printf("The value of avg is : %f \n",avg);


    return 0;
}

void sumANDavg(int a,int b,int *sum , float *avg)
{
     *sum = a+b;                // we learnt that func can return one value to main but to return more than one we use pointers
     *avg = (float)*sum/2;      // here for this instance sum is typecasted to float
}