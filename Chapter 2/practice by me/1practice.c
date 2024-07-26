/* #include<stdio.h>

//find the invalid one
int main()
{
    int a; 
     b=a; // invalid coz b is undeclared
    return 0;
}
*/ 

/*
#include<stdio.h>

int main(){
    int v= 3^2;
     printf("the value of e power 3 is %d\n",v);
     // invalid code to get our answer as ^ is XOR(llogical bitwise operator not an exponential one)
     // to find power we use "pow(3,2)"  which gives 
     // But its valid code as it executes the func which gives  output 0
    return 0;
}
*/ 

#include<stdio.h>

int main(){
    char dt = '21,dec,2020';
     printf("%c",dt);
     // invalid code as 21,2020 are int  & only one alphated or character can be included
    return 0;
}
