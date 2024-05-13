//C Program to Find the Average of 3 Integer numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    //Input
    printf("Enter the Numebers\n");
    scanf("%d%d%d",&a,&b,&c);   
    //Find The average
    avg=(a+b+c)/3.0;        //Implicit Typecasting
    //avg=(a+b+c)/(3*1.0);  //It's also fine-implicit typecasting
    //Print the output
    printf("%.2f\n",avg);   //printing the answer till 2 decimal places

    avg=(a+b+c)/(float)3;  //Explicit typecasting
    printf("%.2f",avg);
    return 0;
}