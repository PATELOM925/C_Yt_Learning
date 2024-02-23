#include<stdio.h>


// Method-1: Using pointers , function & array
 
// void printarray(int *ptr,int n)   // we can directly define the funtion , but it's not the best way to make code asthetic
// {
//  for (int i = 0; i < n; i++)
//  {
//      printf("Thevalue of element %d is %d\n", i+1,*(ptr+i));  // * is used to dereference pr get value from the address.
//      //(ptr+i) will have addresses of values of arr
//      // eg: 1st ly i=0 w'll have ptr+0  , which stores address of 11
//      // eg 2ndly i=1 , w'll have ptr+1 , which stores address of 21
//      // till  6th ly i=6, w'll have ptr+6 , which stores address of 71          
//  }
 


 // OR


 // Method 2: using only functions and arrays

 

 void printarray(int ptr[],int n) 
 {
     for (int i = 0; i < n; i++)
 {
     printf("Thevalue of element %d is %d\n", i+1,ptr[i]);
//      ptr[2]=33; // this array can change value in main() as well.
 }
    ptr[2]=33; // this array can change value in main() as well.
}


int main(){
    int arr[]={11,21,31,41,51,61,71};

    printarray(arr,7); // 7is the no. of elements in arr, so we want for loop 
                       // to run till its only,,other wise it throws garbage value in output.
    
    printf("The value of arr[2] is %d\n",arr[2]);

    return 0;
}