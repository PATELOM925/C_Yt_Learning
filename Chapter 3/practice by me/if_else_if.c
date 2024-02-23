#include<stdio.h>

int main(){
    
    int x;
      printf("Enter a number\n");
      scanf("%d",&x);

    if (x==25)
       {
          printf("your  number is 25\n");
       }
    else if (x==3)
       {
         printf("your  number is 3\n");
       }
    else if (x==21)
       {
         printf("your  number is 21\n");
       }
    else
       {
         printf("your number is neither of 25,3,21 !! \n");
       }

    return 0;
}