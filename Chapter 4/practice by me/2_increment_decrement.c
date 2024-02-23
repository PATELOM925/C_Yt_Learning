#include<stdio.h>

int main(){
    
    int a = 5;
    int b = 15;
    int c = 25;
    int d = 35;
    int e = 6;


// i-- ; it 1st prints then decreases by 1
// --i ; it 1st decreases by 1 then prints

    
        printf("The value of a is %d/n", a++);
        printf("The value of b is %d/n", ++b);
        printf("The value of c is %d/n", c--);
        printf("The value of d is %d/n", --d);

        

        // printf("The value of e is %d/n", e*=2);
        // printf("The value of e is %d/n", e+=2);
        // printf("The value of e is %d/n", e-=2);
        // printf("The value of e is %d/n", e/=2);
        // printf("The value of e is %dn", e%=2);

    return 0;
}


// COMPOUND ASSIGN OPERATOR 
// i+=a means i = i + a
// i-=a means i = i - a
// i*=a means i = i * a
// i%=a means i = i % a