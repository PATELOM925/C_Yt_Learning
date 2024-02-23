#include<stdio.h>
#include<math.h>   // written to get access to library of maths functions

// are of circle 
int area;

int main(){

    int side;
      printf("Enter lenght of side \n");
      scanf("%d",&side);
      printf("area of square is %d\n",side*side);
      printf("area of square is %f\n",pow(side,2)); // another way of exponenting & to use pow() we need to add %f as it is a double datatype
    
    return 0;
}