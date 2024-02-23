#include<stdio.h>

int main(){
    int i=0;
    int skip=7;    
    
    
    
  while (i<10)
  {
      i++;
      if (i!=skip)
      {
         continue;
      }
       else
       {
           printf("%d\n",i);
       } 
       
  }
    
    
    return 0;
}
//  ' continue ' here skips the part below it & takes back to while loop , simply it doesn't let executes code further & below
// its right code and works in https://www.programiz.com/c-programming/online-compiler/