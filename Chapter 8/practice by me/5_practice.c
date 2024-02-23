//  DECRPYTING string practice

#include<stdio.h>

void decrypt(char *c)
{
        char *ptr = c;

    while (*ptr!='\0')
    {
    *ptr =  *ptr -  1;
    ptr++;
    } 
    
}
 

int main(){
    char s[]="Dpnf!ifsf!";
    decrypt(s);

    printf("The decrypted string is: %s",s);

    return 0;
} 