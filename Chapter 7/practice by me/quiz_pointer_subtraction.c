#include<stdio.h>

int main(){
     int i=7;
     int a=9;
     int *j=&i;
     int *b=&a;


      printf("The value of b is: %u\n",b); 
      printf("The value of j is: %u\n",j);  


      printf("The value of j-b pointer is: %u\n",(j-b));  // two pointers when subtracted shows 1
      printf("The value of b-j pointer is %u\n\n",b-j);   //  doubt : why it doesn;t shows 1


    //   printf("The comparison of j=b pointer is: %u\n",(j=b));   // here value of j becomes equal to valueof  b
      printf("The comparison of b=j pointer is: %u\n",(b=j));      // here value of b becomes equal to vale of j
  
      

        
// so two pointers can be subtracted & compared


    return 0;
}