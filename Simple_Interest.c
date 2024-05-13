//C program to calculate Simple Interest

#include<stdio.h>
int main(){
     float principal,rate,time,si;
     //Take the Input
     printf("Enter principal:");
     scanf("%f",&principal);
     printf("Enter the rate of interest:");
     scanf("%f",&rate); 
     printf("Enter the time:");
     scanf("%f",&time);

    //Do Processing
     si = (principal*rate*time)/100;

    //Print output or SI
    printf("Simple interest=%.2f",si); //.2f is used to print the result till 2 decimal places only
    return 0;
}