#include<stdio.h>

int main(){
    char alphabet;
         // 97 - 122 = a - z
         // 65 - 90 = A - Z
         // ASCII values

        printf("enter an alphabet\n");
        scanf("%c",&alphabet); 


    if (alphabet>=97 && alphabet<=122  )
        { 
               printf("It's a lower case ");
        }
    else
        {
               printf("It's not uppercase ");
        }
    

    return 0;
}