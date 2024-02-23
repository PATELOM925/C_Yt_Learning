#include<stdio.h>

// convert celsius to faranheit
// ( T{in C} * 9/5 ) + 32 = T {in F}
float conversion (float c);

int main(){

    float a;
        printf("Enter temperature in celsius");
        scanf("%f",&a);
       
        printf("The temperature in Faranheit is %f\n",conversion(a));
    
    return 0;
}

float conversion (float c)
{
       int b;
       b = (c * 1.8) + 32;
       return b;
}