/*C Program to do Arithmetic Operations on 2 numbers
Add,Subtract,Multiply,Division,Modulus
*/

#include<stdio.h>
int main()
{
    float a,b;
    //Input
     printf("Enter First Number");
     scanf("%f",&a);
     printf("Enter Second Number");
     scanf("%f",&b);

    //Processing
    printf("Sum of %f and %f=%g\n",a,b,a+b);
    printf("Subtraction of %f and %f=%g\n",a,b,a-b);
    printf("Mulitplication of %f and %f=%g\n",a,b,a*b);
    printf("Quotient of %f and %f=%g\n",a,b,a/b);
   // printf("Remainder of %f and %f=%f\n",a,b,a%b);

    return 0;
}