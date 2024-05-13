//C program to swap 2 variables Without 3rd variable (Using Arithmetic Operators)

#include<stdio.h>
int main(){
     
     float a,b;
     //Take the Input
     printf("Enter the first number:");
     scanf("%f",&a);
     printf("Enter the second number:");
     scanf("%f",&b);
     
     printf("Before swap:\n");
     printf("Value of a =%f\n",a);
     printf("Value of b =%f",b);
     //Processing 
     a=a+b;
     b=a-b;
     a=a-b; 

     //or 
     /*This is also correct using Multiplication/Division operators
     a=a*b;
     b=a/b;
     a=a/b;
     */ 
     //Output
     printf("\nAfter swap:\n");
     printf("Value of a =%f\n",a);
     printf("Value of b =%f",b);
    return 0;
}