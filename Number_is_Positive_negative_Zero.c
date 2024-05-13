//C program to check Whether a number is Positive,Negative or Zero

#include<stdio.h>
int main()
{
    float n;
    //Input
    printf("Enter the number:");
    scanf("%f",&n);
    //Processing & Output
    //Ist way
    if(n==0)
    {
        printf("Number is Zero");
    }
    else
    {
       if(n>0)
        printf("%f is Positive",n);
       else
        printf("%f is Negative",n);
    }
    /*2nd Way
    if(n==0)
    {
        printf("Number is Zero");
    }
    else if(n>0)
        printf("%f is Positive",n);
    else
        printf("%f is Negative",n);
    */ 
    return 0;
}