//C program to swap 2 variables using 3rd variable

#include<stdio.h>
int main()
{
    float a,b,t;
    //Take the input
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);

    printf("Before swap\n");
    printf("Value of first number=%f\n",a);
    printf("Value of second number=%f\n",b);
    //Calculation
    t=a;
    a=b;
    b=t;
    //Print o/p
    printf("After swap\n");
    printf("Value of first number=%f\n",a);
    printf("Value of second number=%f\n",b);
    return 0;
}