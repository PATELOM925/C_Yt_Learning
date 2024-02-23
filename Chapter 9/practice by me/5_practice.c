#include<stdio.h>
#include<string.h>

typedef struct date
{
     int day;
     int month;
     int year;   
}date;

void display (date d)
{
  printf("The date is %d/%d/%d\n",d.day,d.month,d.year);  
}

int comparedate(date d1,date d2)
{
    if (d1.year>d2.year)
    {  
        return 0;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }

    if (d1.month>d2.month)
    {  
        return 0;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }

     if (d1.day>d2.day)
    {  
        return 0;
    } 
    if (d1.day<d2.day)
    {
        return -1;
    }

    return 0; // return 0 means if any of above possibilities doesn't work then print 0 , which in our case comes when both the date similar  
    
} 

int main(){ 
    date d1 = {31,01,2022};
    date d2 = {1,02,2022};
    date d3 = {31,01,2022};
    display(d1);
    display(d2); 
    display(d3);   

    // int a = comparedate(d1,d2);
    int a = comparedate(d1,d3);
    printf("Date comparison function returns %d\n",a);
 

 
    return 0;
}