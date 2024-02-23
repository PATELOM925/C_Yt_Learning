#include<stdio.h>

int main(){
    
    int phy;

    int  maths;
    int  chem;
    int total;
    float percentage;

        printf("Enter your physics marks\n");
         scanf("%d",&phy); 

        printf("Enter your chemistry marks\n");
         scanf("%d",&chem); 

        printf("Enter your maths marks\n");
         scanf("%d",&maths); 

        printf("Your total marks is %d\n",total=(phy+chem+maths));
         
        printf("your percentage is %f\n", percentage=total/3);

    if (percentage<40 || maths<33 || phy<33 || chem<33)
        {
            printf(" you have failed\n");
        }
    else
        {
            printf(" you have passed\n");
        }    

    return 0;
}