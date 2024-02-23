#include<stdio.h>

int main(){
    
    float celcius;
    float constant=1.8;
    float  f;
      printf("Enter temperature in Celcius\n");
      scanf("%f", &celcius);

      printf("The temperature in faranheit is %f", f=(celcius*1.8)+32);


    return 0;
}