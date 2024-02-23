#include<stdio.h>

// int wrong_swap(int a ,int b);
int swap(int *a, int *b);

int main(){
    
      int x=3; 
      int y=4;

        //   printf("now x and y  before wrong swpaping is %d and %d\n",x,y);
            //   wrong_swap(x,y);     //this doesn't works                               // this is call by value so can't change anything in main
        //   printf("now x and y after wrong swapping is %d and %d\n",x,y);

      printf("now x and y after swapping is %d and %d\n",x,y);
          swap(&x,&y);     // this works                                                 // This is call by reference and as it uses pointers , which can store 
                                                                                         // addreses and thus it can swap values
      printf("now x and y after swapping is %d and %d\n",x,y);

    return 0;
}


int swap(int *a, int *b)
{

int temp;
        temp = *a;
        *a = *b;
        *b = temp;
 
}

// int wrong_swap(int a ,int b)
// {
//         int temp;
//         temp = a;
//         a = b;
//         b = temp;

// }

        


