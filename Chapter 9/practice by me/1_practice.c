#include<stdio.h>
#include<string.h>

struct vector
{
    int x;
    int y;
};


int main(){
    
    struct vector v1,v2,v3;

    v1.x=10;
    v1.y=7;
    printf("x dimension is %d and y dimension is %d \n",v1.x,v1.y);

    v2.x=110;
    v2.y=77;
    printf("x dimension is %d and y dimension is %d \n",v2.x,v2.y);

    v3.x=1110;
    v3.y=7123;
    printf("x dimension is %d and y dimension is %d \n",v3.x,v3.y);


    return 0;
}