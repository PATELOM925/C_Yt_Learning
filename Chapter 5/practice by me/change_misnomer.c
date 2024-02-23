#include<stdio.h>

void change(int a);

int main(){

    int b = 77;
    
    printf("b before adding [change function]is %d\n", b);
    change(b);
    printf("b after adding [change function]is %d\n", b);

    return 0;
}

void change(int a)
{
    a=77;

}

// a function cannot change the main() function , whatever its names becomes
// so here change is the name of function , such names used to fool proggrammers
// so they make mistake and give wrong answers.