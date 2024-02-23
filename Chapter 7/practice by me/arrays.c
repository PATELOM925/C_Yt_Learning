#include<stdio.h>

int main(){
    //naive way to create 4 ints
    // int marks1 =22;
    // int marks2 =32;
    // int marks3 = 42;
    // int marks4= 53;
    
       int marks[4];
       marks[0]=22;
       marks[1]=32;
       marks[2]=42;
       marks[3]=54;
       printf("marks+3 refers to %d\n",*(marks+3));

    return 0;
}