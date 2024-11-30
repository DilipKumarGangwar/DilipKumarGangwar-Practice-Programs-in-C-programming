/*
C program to Print Pattern

I/P: row = 4

O/P:

*
**
***
****
***
**
*

*/

#include<stdio.h>

int main()
{
   int row,i,j;
   printf("Enter no of rows=");
   scanf("%d",&row);
  
   //print Upper Part/Pattern

   //Iterate for each row
   for(i=1;i<=row;i++)
   {
    //Print star character  
    for(j=1;j<=i;j++)
       printf("*");
    //change line   
    printf("\n");   
   }

   //print Lower Part/Pattern

   //Iterate for each row
   for(i=row;i>=1;i--)
   {
    //Print star character  
    for(j=1;j<=i;j++)
       printf("*");
    //change line   
    printf("\n");   
   }

    return 0;
}