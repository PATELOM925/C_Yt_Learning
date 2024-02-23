#include<stdio.h>
#include<string.h>

typedef struct complex
{
    int real;
    int complex; 
} comp;

void display(comp c ){
 printf("The value of real part is %d\n",c.real);
 printf("The value of complex part is %d\n",c.complex);
 printf("The complex no. is %d + i%d\n\n",c.real,c.complex);

}

int main(){
    comp num[5];
    for (int i = 0; i < 5; i++)
    {  
        printf("Enter real value for %d complex number \n",i+1);
       scanf("%d", &num[i].real);

        printf("Enter complex value for %d complex number \n",i+1);
       scanf("%d", &num[i].complex);
    } 

        for (int i = 0; i < 5; i++)
           {
           display (num[i]);
           } 
     
     

    return 0;
}