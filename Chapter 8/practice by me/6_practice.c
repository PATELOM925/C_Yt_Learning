#include<stdio.h>

int occurence( char st[], char c)
{
    char *ptr=st;
    int count = 0;

 while (*ptr!='\0')
  {
    if (*ptr==c)
    {
        count++;
    }
    ptr++;
  }
    return count;
}

int main(){
    
   char s[]="array";

    int count = occurence(s,'a');

    printf("occurences = %d\n",count);

    return 0; 
} 