#include<stdio.h>

int main(){
     int marks[3];
     int *pointer;

     pointer=&marks[0];


    for (int i = 0; i < 3; i++)
    {
        printf("Enter the marks of student %d\n", i+1);
        scanf("%d",pointer);
        pointer++;
    }
     
     for (int i = 0; i < 3; i++)
    {
        printf("the marks of %d student : is %d \n", i+1, marks[i]);
        
    }

    printf("The address of marks[0] is %u\n",pointer);
    pointer++;
    printf("The address of marks[1] is %u\n",pointer);
    pointer++;
    printf("The address of marks[2] is %u\n",pointer);

      
    return 0;
}