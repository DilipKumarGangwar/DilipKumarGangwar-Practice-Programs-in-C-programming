//To run the code , comment out the other 2 codes (Loops)

//C program to Count Total Digits in a given number:

/*
Example :
Enter a Number : 3089
Total count of digits = 4
*/

/*...........................
 Using While Loop
............................*/

#include<stdio.h>
int main()
{
    int num, count =0 ;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num ==0)   // to handle the case if num = 0
      printf("Total count of digits = 1");
    else
    {   
        while(num != 0 )
        {
            count = count + 1; // counting the digits
            num = num / 10 ;  // change/reduce number

        }

        printf("Total count of digits = %d", count); 
    }
    return 0;
}

/*....................
  Using For Loop
......................*/

#include<stdio.h>
int main()
{
    int num, count =0 ;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num ==0)   // to handle the case if num = 0
      printf("Total count of digits = 1");
    else
    {
        for( ;num != 0; )
        {
            count = count + 1; // counting the digits
            num = num / 10 ;  // change/reduce number 
        }
        printf("Total count of digits = %d", count); 
    }
   
    return 0;
}

/*..........................
 Using Do While Loop
.............................*/
#include<stdio.h>
int main()
{
    int num, count =0 ;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
        count = count + 1; // counting the digits
            num = num / 10 ;  // change/reduce number 
    } while (num!=0);
    printf("Total count of digits = %d", count); 
    return 0;
}





