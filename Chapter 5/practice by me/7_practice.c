#include<stdio.h>

void printpattern(int n);

int main(){
    
    int a;
      printf("Enter no. of lines in which you want the pattern to be");
      scanf("%d",&a);
 
    printpattern(a);

    return 0;
}


void printpattern(int n)
// for n=3
// we want;
// *
// ***
// *****
{
     if (n==1)
  {
         printf("*\n");                         // for odd
        //  printf("* *\n");                          // for even
         return;
  }
  printpattern(n-1);
         for (int i = 0; i < (2*n-1); i++)      // to print odd order we used 2n-1
        //  for (int i = 0; i < (2*n); i++)           // to print even order we use 2n
  {
         printf("* ");
  }
     printf("\n");
  
}
s