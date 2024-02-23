#include<stdio.h>

int main(){
    
    float tax = 0;
    float income;
        printf("Enter your income\n");
        scanf("%f", &income);

    if (income>=250000 && income<=500000 )
    {
        tax += 0.05 * (income - 250000); //tax += a means "tax = tax + a"
    }
    if (income>=500000 && income<=1000000 )
    {
        tax += 0.20 * (income - 500000);
    }
    if (income>=100000 )
    {
        tax += 0.3 * (income - 100000);
    }
    printf("Your net income tax is %f/n",tax);
    
        


    return 0;
}