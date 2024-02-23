#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[30];
};

void show(struct employee function){
     printf("Employee  code is %d\n",function.code);
     printf("Employee  salary is %f\n",function.salary);
     printf("Employee  name is %s\n\n",function.name);
     function.code=111;     //  here code changed, but won't be able to change e1's value
}                                                      //
                                                       //
int main(){                                            //
                                                       //
    struct employee e1;                                // 
        e1.code=100;                                   // 
        e1.salary=5000;                                //
        strcpy(e1.name,"Rahul");                       //
                                                       //
        show(e1);                                      //
        printf("Employee  code is %d\n",e1.code); // struct in function can't change the int main()

    return 0;
} 