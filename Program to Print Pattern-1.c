/*
row=3, col=4

****
****
****


*/
#include<stdio.h>

int main()
{
   int row,col,i,j;
   printf("Enter no of rows=");
   scanf("%d",&row);
   printf("Enter no of col=");
   scanf("%d",&col); 

   //print pattern
   
   //Iterate for each row
   for(i=1;i<=row;i++)
   {
    //Print star character  
    for(j=1;j<=col;j++)
       printf("*");
    //change line   
    printf("\n");   
   }

    return 0;
}