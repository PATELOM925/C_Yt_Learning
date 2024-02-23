#include<stdio.h>
#include<string.h>

void slice(char *s,int m,int n);



int main(){
    
 char str[]="ompatel";
 slice(str,2 ,5);
 printf("the sliced charcters are :%s\n",str);

    return 0;
}



void slice(char *s,int m,int n)
{
int i=0;

while ((m+i)<n)
{
    s[i]=s[i+m];
    i++;
}
s[i]='\0';
}