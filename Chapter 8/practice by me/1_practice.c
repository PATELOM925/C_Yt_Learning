#include<stdio.h>
#include<string.h>

int main(){
    char s1[50];
    char s2[50];
    char c;
    int i=0;

      printf("Enter the value of 1st string\n");
      scanf("%s",s1);


      printf("Enter the value of 2nd string character by character\n");
      while (c!='\n')
      {
          fflush(stdin);
          scanf("%c",&c);
          s2[i]=c;
          i++; 
      }
    //   s2[i]='\0'; // shows negative value in strcmp on typing both equal input due to '\0' compared to \n
      s2[i-1]='\0';  // shows strcmp as O...equal on typing both equal input

      printf("The value of 1st string is %s\n",s1);
      printf("The value of 2nd string is %s\n",s2);
       printf("COMPARISON  OF 2 string is %d\n",strcmp(s1,s2));
      




    return 0;
}