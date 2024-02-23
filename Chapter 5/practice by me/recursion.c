#include<stdio.h>

int factorial(int x);

int main(){
    int f;

         printf("Enter the number you want factorial of");
         scanf("%d",&f);
         
    printf("The value of factorial %d is %d\n",f,factorial(f));

    return 0;
}


int factorial(int x)
{
    printf("Calling  factorial (%d)\n",x); 
    
         // it shows how reccursion works  by printing its tree formation
         // type of work in output

   if (x==0 || x==1)
   {
         return 1;
   }
   else
   {
         return x * factorial(x-1);
      
   }

}