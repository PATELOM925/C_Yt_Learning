#include<stdio.h>

int main(){
    int marks[4]; //llocate spaces to 4 ntegers
                  // marks[] acts as an integer here

       printf("Enter 1st marks\n");
         scanf("%d",&marks[0]);
       printf("Enter 2nd marks\n");
         scanf("%d",&marks[1]);
       printf("Enter 3rd marks\n");
         scanf("%d",&marks[2]);
       printf("Enter 4th marks\n");
         scanf("%d",&marks[3]);


    printf("The marks you have entered are %d , %d , %d and %d\n",marks[0],marks[1],marks[2],marks[3]);    
    
    return 0;
}