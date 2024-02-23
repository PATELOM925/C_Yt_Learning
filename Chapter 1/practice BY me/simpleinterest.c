#include<stdio.h>

int main(){

    float p;
    float r;
    float t;
    float a;
    float si;
    int c=100;

        printf("Enter principal value\n");
        scanf("%f",&p);
        printf("Enter rate of interest\n");
        scanf("%f",&r);
        printf("Enter time period\n");
        scanf("%f",&t);

        printf("Total simple interest is %f\n", si = (p*r*t)/c );
        printf("Total amount now becomes %f\n", a = p+si );
        
     
    return 0;
}