/*
row=4

   *
  **
 ***
****

*/
#include<stdio.h>

int main()
{
   int row,i,j;
   printf("Enter no of rows=");
   scanf("%d",&row);
  
   //print pattern
    //Iterate for each row
   for(i=1;i<=row;i++)
   {
     //Print spaces  
    for(j=1;j<=row-i;j++)
       printf(" ");  
    //Print star character  
    for(j=1;j<=i;j++)
       printf("*");
    //change line   
    printf("\n");   
   }

    return 0;
}