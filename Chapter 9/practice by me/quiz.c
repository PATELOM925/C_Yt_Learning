#include<stdio.h>
#include<string.h>


struct input 
{
    int code;
    float salary;
    char name[30];
};


int main(){
    
     struct input e1,e2,e3;
     
    printf("Enter the name of 1st employ %s\n");
     scanf("%s",&e1.name);
    printf("Enter the salary of 1st employ %s\n");
     scanf("%f",&e1.salary);
    printf("Enter the code of 1st employ %s\n");
     scanf("%d",&e1.code); 

    printf("Enter the name of 2nd employ %s\n");
     scanf("%s",e2.name);
    printf("Enter the salary of 2nd employ %s\n");
     scanf("%f",&e2.salary);
    printf("Enter the code of 2nd employ %s\n");
     scanf("%d",&e2.code); 

    printf("Enter the name of 3rd employ %s\n");
     scanf("%s",e3.name);
    printf("Enter the salary of 3rd employ %s\n");
     scanf("%f",&e3.salary);
    printf("Enter the code of 3rd employ %s\n");
     scanf("%d",&e3.code); 


    printf("employee name is : %s\n",e1.name);
    printf("employee name is : %s\n",e2.name);
    printf("employee name is : %s\n",e3.name);

    printf("e1 salary is : %f\n",e1.salary);
    printf("e2 salary is : %f\n",e2.salary);
    printf("e3 salary is : %f\n",e3.salary);

    printf("e1 code is : %d\n",e1.code);
    printf("e2 code is : %d\n",e2.code);
    printf("e3 code is : %d\n",e3.code);


   
    


    return 0;
}