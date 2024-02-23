#include<stdio.h>

int main(){
    
    int grade;

     printf("enter your marks\n");
     scanf("%d",&grade);

    if (grade>=90 && grade<=100)
       {  
         printf("Your grade is O\n"); 
       }

    else if (grade>=80 && grade<90)
       {  
         printf("Your grade is A\n"); 
       }

    else if (grade>=70 && grade<80)
       {  
         printf("Your grade is B\n"); 
       }   

    else if (grade>=60 && grade<70)
       {  
         printf("Your grade is C\n"); 
       }   
    
    else if (grade>=50 && grade<60)
       {  
         printf("Your grade is D\n"); 
       } 

    else if (grade>33 && grade<50)
       {  
         printf("Your grade is D\n"); 
       } 

    else if (grade<=33)
        {
         printf("Your grade is F");
        }  


    return 0;
}