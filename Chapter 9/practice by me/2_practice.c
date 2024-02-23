#include<stdio.h>
#include<string.h>

struct vector
{
    int x;
    int y;
};


struct vector sumvector(struct vector v1,struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){ 
    
    struct vector v1,v2,sum;

    v1.x=10;
    v1.y=7;
    printf("x dimension is %d and y dimension is %d \n",v1.x,v1.y);

    v2.x=110;
    v2.y=77;
    printf("x dimension is %d and y dimension is %d \n",v2.x,v2.y);
 
  
    sum = sumvector(v1,v2);
    printf("x dimension of result is %d and y dimension of result is %d \n",sum.x,sum.y);

    return 0;
}