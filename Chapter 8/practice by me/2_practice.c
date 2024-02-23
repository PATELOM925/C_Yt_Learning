#include<stdio.h>
#include<string.h>

int Strlen(char *s);

int main(){
    
    char str[]=" krishna ";

    Strlen(str);

    int l = Strlen(str);

    printf(" The Lenght of the string is %d\n",l);



    return 0;
}




int Strlen(char *s)
{
  char *ptr = s;
  int len=0; 

  while (*ptr!='\0')
  {
      len++;
      ptr++;
  }
  return len;
  

}