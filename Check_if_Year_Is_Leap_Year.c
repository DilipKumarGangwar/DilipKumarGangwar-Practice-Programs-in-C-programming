//C Program to Check if a year is leap year or not

//Method 1: (Using Nested if else)
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year\n");
    scanf("%d",&year);
    if(year%100==0)
    {
      if(year%400==0)
        printf("%d is Leap Year",year);
      else       
        printf("%d is Not Leap Year",year);
    }
    else
    {
        if(year%4==0)
        printf("%d is Leap Year",year);
        else       
        printf("%d is Not Leap Year",year);
    }
    return 0;
}

//Method 2: (In one line)
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year\n");
    scanf("%d",&year);
    if((year%4==0)&&!(year%100==0) || year%400==0)
      printf("%d is Leap Year",year);
    else  
      printf("%d is Not Leap Year",year);
    return 0;
}

//Method 3: (Using Macro)
#include<stdio.h>
#define ISLEAP(y) ((year%4==0)&&!(year%100==0) || year%400==0)
int main()
{
    int year;
    printf("Enter a Year\n");
    scanf("%d",&year);
    if(ISLEAP(year))
      printf("%d is Leap Year",year);
    else  
      printf("%d is Not Leap Year",year);
    return 0;
}