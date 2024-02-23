// encrypting string practice

#include<stdio.h>

void encrypt(char *c)
{
        char *ptr = c;

    while (*ptr!='\0')
    {
    *ptr = 1 + *ptr;
    ptr++;
    } 
    
}

int main(){
    char s[]="Come here ";
    encrypt(s);

    printf("The encrypted string is: %s",s);

    return 0;
} 