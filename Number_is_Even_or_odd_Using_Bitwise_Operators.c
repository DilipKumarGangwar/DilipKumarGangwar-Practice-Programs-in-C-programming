//C program to check Whether a number is even or odd using Bitwise Operators (&,|,^)

#include<stdio.h>
int main()
{
    //Input
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    //Processing  , Output
    //Using BITWISE AND
    if((n&1)==0)
      printf("%d is Even no\n",n);
    else 
      printf("%d is Odd no\n",n);
    //Using BITWISE OR    
    if((n|1)==(n+1))
      printf("%d is Even no\n",n);
    else 
      printf("%d is Odd no\n",n);  
    //Using BITWISE XOR      
    if((n^1)==(n+1))
      printf("%d is Even no\n",n);
    else 
      printf("%d is Odd no\n",n);  
    return 0;
}