#include<stdio.h>
#include<string.h>

typedef struct date
{
     int hr;
     int min;
     int sec;
     int day;
     int month;
     int year; 
     
}date;

void display (date d)
{
  printf("The timestamp is %d:%d:%d || %d/%d/%d\n",d.hr,d.min,d.sec,d.day,d.month,d.year);  
}

int comparetime(date d1,date d2)
{
    if (d1.year>d2.year)
    {  
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }

    if (d1.month>d2.month)
    {  
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }

     if (d1.day>d2.day)
    {  
        return 1;
    } 
    if (d1.day<d2.day)
    {
        return -1;
    }

     if (d1.hr>d2.hr)
    {  
        return 1;
    } 
    if (d1.hr<d2.hr)
    {
        return -1;
    }

    if (d1.min>d2.min)
    {  
        return 1;
    } 
    if (d1.min<d2.min)
    {
        return -1;
    }

    if (d1.sec>d2.sec)
    {  
        return 1;
    } 
    if (d1.sec<d2.sec)
    {
        return -1;
    }

    return 0; // return 0 means if any of above possibilities doesn't work then print 0 , which in our case comes when both the date similar  
    
} 

int main(){ 
    date d1 = {2,25,52,31,01,2022};
    date d2 = {7,33,59,1,02,2022};
    date d3 = {12,11,01,31,01,2022};
    display(d1);
    display(d2); 
    display(d3);   

    // int a = comparetime(d1,d2);
    int a = comparetime(d1,d3);
    printf(" comparison function returns %d\n",a);
 
    return 0;
}