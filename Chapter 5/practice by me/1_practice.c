#include<stdio.h>

float average(int a, int b, int c);

int main(){

    int a;
    int b;
    int c;

       printf("enter 1st no.");
       scanf("%d",&a);

       printf("enter 2nd no.");
       scanf("%d",&b);

       printf("enter 3rd no.");
       scanf("%d",&c);

    printf("The average of 3 no. is %f\n",average(a,b,c));

    return 0;
}

float average(int a, int b, int c)
{
float y;
 y = (float)(a+b+c)/3;                         // float is used to get answers in actual decimal 
                                               // if float wasn't cast it would return answers in only integers by rounding off.

 return y;   

}