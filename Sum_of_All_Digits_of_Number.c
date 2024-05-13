//To run the code , comment out the other 2 codes (Loops)

//C program to Find Sum of All the Digits in a given number:

/*
Example :
Enter a Number : 3089
Sum of All digits = 20
*/

/*...........................
 Using While Loop
............................*/

#include<stdio.h>
int main()
{
    int num, sum=0, rem ;
    printf("Enter a number: ");
    scanf("%d",&num);
   
    while ( num != 0  )
    {
        rem = num % 10;  // Extracting the last digit
        sum = sum + rem; // Adding the digit
        num = num / 10 ;  // changing / reducing the number     
    } 

    printf("Sum of All digits = %d", sum); 
    return 0;
}


/*....................
  Using For Loop
......................*/

#include<stdio.h>
int main()
{
    int num, sum=0, rem ;
    printf("Enter a number: ");
    scanf("%d",&num);
   
    for ( ; num != 0 ;  )
    {
        rem = num % 10;  // Extracting the last digit
        sum = sum + rem; // Adding the digit
        num = num / 10 ;  // changing / reducing the number     
    } 

    printf("Sum of All digits = %d", sum); 
    return 0;
}


/*..........................
 Using Do While Loop
.............................*/

#include<stdio.h>
int main()
{
    int num, sum=0, rem ;
    printf("Enter a number: ");
    scanf("%d",&num);
   
    do
    {
        rem = num % 10;  // Extracting the last digit
        sum = sum + rem; // Adding the digit
        num = num / 10 ;  // changing / reducing the number     
    } while ( num != 0  );

    printf("Sum of All digits = %d", sum); 
    return 0;
}