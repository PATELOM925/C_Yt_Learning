#include<stdio.h>

// find force exerted on mass m take g=9.8 m/s

float force(float mass);

int main(){

    int m;
      printf("Enter the mass of object ");
      scanf("%d",&m);

    printf("The force exerted on object of mass %d is %f newton\n",m,force(m));

    // instead of %f 
    // you can also use "%.0f" or "%.1f" or "%2f"or uptill any decimal you want the accurate answer

     printf("The force exerted on object of mass %d is %.0f newton\n",m,force(m));
     printf("The force exerted on object of mass %d is %.1f newton\n",m,force(m));
     printf("The force exerted on object of mass %d is %.2f newton\n",m,force(m));
     printf("The force exerted on object of mass %d is %.3f newton\n",m,force(m));
    
    return 0;
}

float force(float mass)
{
  float result = mass * 9.8;
  return result;

}