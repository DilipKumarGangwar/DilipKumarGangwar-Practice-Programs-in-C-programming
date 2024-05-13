//C program to swap 2 variables Without 3rd variable(Using Bitwise XOR Operator)

#include<stdio.h>
int main()
{
     int a,b;
    //Take the Input
     printf("Enter the first number:");
     scanf("%d",&a);
     printf("Enter the second number:");
     scanf("%d",&b);

     printf("Before Swap:\n");
     printf("Value of a=%d\n",a);
     printf("Value of b=%d\n",b);
    //Processing
     a=a^b;
     b=a^b;
     a=a^b;
    //Output
     printf("After Swap:\n");
     printf("Value of a=%d\n",a);
     printf("Value of b=%d\n",b);
     return 0;
}