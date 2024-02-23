#include<stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    
    int x;

     goodmorning();                                   // here main directly calling ALL the FUNCTIONS
     goodafternoon();
     goodnight();

    return 0;
}

void goodmorning()
{
 printf("\nGood morning Vadodara\n \n");
}                                               
void goodafternoon()                                    
{
 printf("Good afternoon Vadodara\n \n");
}
void goodnight()
{
 printf("Good night Vadodara\n \n");
}