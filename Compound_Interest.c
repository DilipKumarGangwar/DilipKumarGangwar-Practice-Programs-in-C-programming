//C Program to Calculate Compound Interest
//(Rate of Interest is caculated annually)

#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,CI;
    //Take the input
    printf("Enter principal:");
    scanf("%f",&principal);
    printf("Enter rate of interest:");
    scanf("%f",&rate); 
    printf("Enter time:");
    scanf("%f",&time);  
    //Processing
    CI=principal*(pow((1+rate/100),time) - 1);
    //Print the Output
    printf("Compound interest=%.2f",CI); //.2f is used to print the result till 2 decimal places only
    return 0;
}