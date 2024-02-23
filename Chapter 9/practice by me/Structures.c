#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};


int main(){
    
    struct employee e1;
        e1.code=100;      // '.' is called member operator. 
        e1.salary=5000;   // '.' means to set eployee 1's detail as given.
        // e1.name="rahul"; }}}}won;t work as name is an array
        strcpy(e1.name,"Rahul");
    
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);

    return 0;
} 