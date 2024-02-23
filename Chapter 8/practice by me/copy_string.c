#include<stdio.h>
#include<string.h>

int main(){
    
    char *str1= {"om m patel"};
    char str2[50];
    char str3[50]="hello";
    char str4[50]=" hello ";

    char str5[50]="krishna";
     char str6[50]="krishna";
      char str7[50]="krhshna";
      char str8[50]="krjshna";
      char str9[50]="krishn";

        // length of string //// strlen
      printf("The lenght of string 1 is : %lu \n",strlen(str1));
      printf("The lenght of string 2 is : %lu \n",strlen(str2));
      printf("The lenght of string 3 is : %lu \n",strlen(str3));
      printf("The lenght of string 4 is : %lu \n",strlen(str4)); 
      printf("The lenght of string 5 is : %lu \n",strlen(str5));
      printf("The lenght of string 6 is : %lu \n",strlen(str6));
      printf("The lenght of string 7 is : %lu \n",strlen(str7));
      printf("The lenght of string 8 is : %lu \n",strlen(str8));
      printf("The lenght of string 9 is : %lu \n\n\n",strlen(str9));
    
      
    
    strcpy(str2,str1);
    printf("/nThe string - 1 is : %s \n ",str1);
    printf("/nThe string - 2 is : %s \n",str2);

    strcat(str3,str1);
    printf("/nThe string - 3 becomes is : %s \n ",str3);
    strcat(str4,str1);
    printf("/nThe string - 4 becomes is : %s \n ",str4);

    //strcmp//compare

    printf("The string 5 is : %s \n",str5);
    printf("The string 6 is : %s \n",str6);
    printf("The string 7 is : %s \n",str7);
    printf("The string 8 is : %s \n\n",str8);
    printf("The string 9 is : %s \n\n",str9);


    printf("The string 5 & 6 is : %d \n\n",strcmp(str5,str6));

     printf("The string 5 & 7 is : %d \n ",strcmp(str5,str7));
      printf("The string 5 & 8 is : %d \n\n ",strcmp(str5,str8));
       printf("The string 5 & 9 is : %d \n\n ",strcmp(str5,str9));

      printf("The string 7 & 5 is : %d \n ",strcmp(str7,str5));
      printf("The string 8 & 5 is : %d \n ",strcmp(str8,str5));
      printf("The string 9 & 5 is : %d \n\n ",strcmp(str9,str5));
      

    
    

    return 0; 
}