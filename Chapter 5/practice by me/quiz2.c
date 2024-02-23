#include<stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    
    int x;

     goodmorning();                                   // HERE main "  INDIRECTLY  " calling ALL the FUNCTIONS
     

    return 0;
}

void goodmorning()
{
 printf("\nGood morning Vadodara\n \n");
 goodafternoon();                                                           // here Function INSIDE a Function
}          

void goodafternoon()
{
 printf("Good afternoon Vadodara\n \n");
   goodnight();
}

void goodnight()
{
 printf("Good night Vadodara\n \n");
}