#include<stdio.h>

int main(){
    
    int i=8;
    int *j; 
    int **k;
    int ***l;
    int ****m;

    j=&i;
    k=&j;
    l=&k;
    m=&l;
     
          printf("Address of i = %d\n",i);
          printf("Address of i = %u\n",&i);
          printf("Address of i = %u\n",j);
          printf("valueof i = %u\n",&j);
          printf("valueof i = %u\n",*(&i));
          printf("valueof i = %u\n",*j);
          printf("valueof i = %u\n \n \n \n",*(&j));



          printf("Address of j = %d\n",k);
          printf("Address of k = %u\n",l);
          printf("Address of l = %u\n",m);
          printf("address of m = %u\n \n ",&m);

          printf("valueof i = %u\n",&i);
          printf("valueof j = %u\n",&j);
          printf("valueof k = %u\n",&k);
          printf("valueof l = %u\n",&l);
          printf("valueof m = %u\n\n\n",&m);

          printf("valueof i = %u\n",*(&i));
          printf("valueof j = %u\n",*(&j));
          printf("valueof k = %u\n",*(&k));
          printf("valueof l = %u\n",*(&l));
          printf("valueof m = %u\n",*(&m));

    return 0;
}