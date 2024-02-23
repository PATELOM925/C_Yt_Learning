#include<stdio.h>

int main(){

    /// for INTEGER and FLOAT
    
    // int i=32;
    // int *a;
    // a=&i;

    //    printf("The value of a is: %u\n",a);   // print address of i , coz a is a pointer
    //    a++;                                   // increases pointer addres by size of respective data type its is in 
    //                                           // in our case it is integer , so increases by 4 bytes (4 bytes in our laptop/pc)
    //    printf("The value of a after a++ is: %u\n",a);     
    //    a = a+1;                               // a=a+1 and a++ performs same function.
    //    printf("The value of a after a++ and a+1 is: %u\n",a);   
    //                                           // similarly a-- and a=a-1 will decrease address by 4 byptes in case of integer


   /// for CHARACTER 
   
  char i=32;
    char *a;
    a=&i;

       printf("The value of a is: %u\n",a);   // print address of i , coz a is a pointer
       a++;                                   // increases pointer addres by size of respective data type its is in 
                                              // in our case it is character , so increases by 1 bytes (1 bytes in our laptop/pc)
       printf("The value of a after a++ is: %u\n",a);     
       a = a+1;                               // a=a+1 and a++ performs same function.
       printf("The value of a after a++ and a+1 is: %u\n",a);   
                                              // similarly a-- and a=a-1 will decrease address by 1 byptes in case of integer



    return 0;
}