#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[30];
};


int main(){
    
    struct employee one = {100,15000,"om"};
    printf("Employee 1's code is %d\n",one.code);
    printf("Employee 1's salary is %f\n",one.salary);
    printf("Employee 1's name is %s\n\n",one.name);
    
    struct employee  two = {0};
    printf("Employe two's code is %d\n", two.code);
    printf("Employe two's salary is %f\n", two.salary);
    printf("Employe two's name is %s\n", two.name);
    

    return 0;
}