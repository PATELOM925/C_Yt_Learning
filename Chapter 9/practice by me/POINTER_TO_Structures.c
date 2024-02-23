#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[30];
};


int main(){
    
   struct employee e1;
   struct employee *ptr;
   ptr=&e1;
//    (*ptr).code=101;   // -> is arrow operator
   ptr->code=101;  // shortcut

   printf("%d\n",e1.code);

    return 0;
}