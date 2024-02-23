#include<stdio.h>

int main(){
    int x=4;
    int y=5;

       printf("the value of 4x-3y is %d\n", 4*x - 3*y);
          //  due to precendence of operators compiler priotise "*" ahead of "-" .
          //  priority list |||| w1. *,/,%   ||||   2. +,-  ||||  3. =  ||||
       printf("the value of 4x-3y is %d\n", 4*(x - 3*y));
          //  all these priorities exists in absence of ()paranthesis only. 
       printf("the value of 5x/4y is %d\n", 5*x / 4*y);
          //  here 5*x / 4*y gives wrong value due to operators associativity
          //  here : 5*4 / 4*5 = (20 / 4) * 5 =   5 * 5 = 25 (acc to compiler)
          //  *,/ follows left to right associativity : x*y/z = (x*y) / (z)  |||  x/y*z = (x/y) * (z)
          

    return 0;
}