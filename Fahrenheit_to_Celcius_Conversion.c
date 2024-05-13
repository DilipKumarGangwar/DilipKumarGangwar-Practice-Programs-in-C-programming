//C program to Convert temperature from Fahrenheit to Celsius

#include<stdio.h>
int main()
{
    float fahrenheit,celcius;
    //Read the Input data
    printf("Enter the temp. in fahrenheit:");
    scanf("%f",&fahrenheit);
    //Calculation
    celcius=5.0/9*(fahrenheit-32);
    //Output 
    printf("Temp. in Celcius=%.2f",celcius); //.2f is used to print the result till 2 decimal places only
    return 0;
}
