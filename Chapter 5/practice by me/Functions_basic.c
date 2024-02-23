#include<stdio.h>

void display();                                //function prototype

int main(){
    
    int x;
   printf("Hi i am executed 1st\n"); 
    display();                                 // function call
    printf("Hi i am executed last\n"); 
    return 0;
}

void display()
{
  printf("Hi i am display\n");                 // function definition

}