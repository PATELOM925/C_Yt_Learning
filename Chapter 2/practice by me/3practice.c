#include<stdio.h>

// step  by step evaluation of 3*x/y-z+k 
int main(){
    int x=2;
    int y=3;
    int z=3;
    int k=1;
      printf("the value of 3*x/y-z+k is  %d\n", 3*x/y-z+k );
       // here 1st 3*x=6 than we get (6/y)-z+k
       // here 2ndly 6/y=2 then we get (2-z)+k
       // here 3rdly 2-z=-1 then we get (-1+k)
       // here 4thly -1+k=0
    return 0;
}