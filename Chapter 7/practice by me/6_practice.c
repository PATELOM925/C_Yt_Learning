 #include<stdio.h>
 
 int main(){
     int size,i,a[10];
     int positive_no=0;
     int negative_no=0;

    printf("\n Please Enter the Size of an Array :  ");
    scanf("%d", &size);
      
        printf("\n Please Enter the Elements of an Array :  ");
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&a[i]);
        }

              for  (i = 0; i < size; i++)
           {
                  if(a[i]>=0)
                  {
                      positive_no++;
                      printf("\n The positive number is: %d\n",a[i]);

                  }
                  else
                  {
                     negative_no++;
                     printf("\n The negative number is: %d\n",a[i]);
                  }
           }
            
            printf("\n The total positive numbers are %d\n",positive_no);
            printf("\n The total negative numbers are %d\n",negative_no);
        
 
     return 0;
 }