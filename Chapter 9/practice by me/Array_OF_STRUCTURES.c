#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[30];
};

int main(){
    
    struct employee facebook[100];

    facebook[0].code=100;
    facebook[0].salary=1200.15;
    strcpy(facebook[0].name,"Rahul");

    facebook[1].code=101; 
    facebook[1].salary=1320.635;
    strcpy(facebook[1].name,"Neha");

    facebook[2].code=102; 
    facebook[2].salary=2520.77; 
    strcpy(facebook[2].name,"Om");

    facebook[3].code=103; 
    facebook[3].salary=3990.99;
    strcpy(facebook[3].name,"krishna");
    
    printf("facebook employee : %d , %s's salary is %f dollars \n",facebook[0].code,facebook[0].name,facebook[0].salary);
    printf("facebook employee : %d , %s's salary is %f dollars \n",facebook[1].code,facebook[1].name,facebook[1].salary);
    printf("facebook employee : %d , %s's salary is %f dollars \n",facebook[2].code,facebook[2].name,facebook[2].salary);
    printf("facebook employee : %d , %s's salary is %f dollars \n",facebook[3].code,facebook[3].name,facebook[3].salary);
   
    
    

    return 0;
}