#include<stdio.h>

int main(){
    int students=3;
    int subjects=5;
    int p=2;
     
     int marks[3][5][1];

     for (int i = 0; i < students; i++)
     {
            for (int j = 0; j < subjects; j++)
         {
            for (int k = 0; k < p; k++)
            {
                   printf("Enter the marks of %d th student in subject %d and he is pass or fail %d\n",i+1,j+1,k+1);
                   scanf("%d",&marks[i][j][k]);
            }
         }
     }
     

     for (int i = 0; i < students; i++)
     {
            for (int j = 0; j < subjects; j++)
         {
            for (int k = 0; k < p; k++)

             printf("The marks of %d th student in subject %d in  %d unit is:  %d\n",i+1,j+1,k+1,marks[i][j][k]);
         }
     }

     /// trial succesful ///

      

    return 0;
}