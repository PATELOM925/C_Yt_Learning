#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 100; //or you can also write: ptr->code = 100;
    ptr->code = 100;
    printf("%d", e1.code); 

    return 0;
}
