#include<stdio.h>

// reverse the array

void reverse(int *arr,int n)
{
    int temp;

    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] =  arr[(n)-i-1];
        arr[(n)-i-1] = temp;
    }
    
}

int main(){
    
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7); // if we take size 7 then the loop will swap/reverse ntwice endint in oorignal order
                    // so we'l just swap half of loop ...which is by tal=king value 3...cos 4 will remain in
                    // same position even if we reversed.
                    // so to half from 7 to 3 we'll take n/2 in loop (void reverse function) ...which give 7/2=3.5=3(coz its in int)
    
    for (int i = 0; i < 7; i++)  
    {
        printf("The value of %d element is %d\n",i,arr[i]);
    }        

    return 0;
}