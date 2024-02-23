#include<stdio.h>

int main(){
     
    char k[100]="om";   // here it can NOT be Re-intialize
    k="krishna";         //coz it is intialized as Array.
    printf("The string is %s",k);

    char *s="om";   // here it can be Re-intialize 
    s="krishna";    //coz it is intialized as strings.

    printf("The string is %s",s);


   

   
    return 0;
}