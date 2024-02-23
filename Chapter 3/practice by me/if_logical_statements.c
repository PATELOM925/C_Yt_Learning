#include<stdio.h>

int main(){
    
    int age;
    int vip=16;

       printf("Enter your age\n");
       scanf("%d",&age);

    if (age>=18 && age<=70 || vip==16)
      {
         printf("You can drive \n");
      }
    else 
      {
          printf("you cannot drive as you are under 18 and above 70 \n");
      }

    return 0;
}