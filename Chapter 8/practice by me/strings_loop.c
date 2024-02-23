#include<stdio.h>

int main(){
    // char str[]={"om"};
    char str[]={'o','m','\0'};

    char *ptr=str;

while (*ptr!='\0')
{
    printf("%c",*ptr);
    ptr++;
}


    return 0;
}