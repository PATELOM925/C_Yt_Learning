#include<stdio.h>
#include<string.h>

typedef struct employee 
{
    int code;                   // typedef used to make custom datatype
                                // allows the whole struct employee to write in short as emp
    float salary;
    char name[30];
} emp;


int main(){

   // declaring ptr and e1 
     emp e1;
     emp *ptr;
   // pointing ptr to e1
     ptr=&e1;
     ptr->code=101; 
     ptr->salary = 1500.123; 
     strcpy(ptr->name,"om");

      printf("%d\n",e1.code);
      printf("%s\n",e1.name);
      printf("%f\n",e1.salary);


    return 0;
}