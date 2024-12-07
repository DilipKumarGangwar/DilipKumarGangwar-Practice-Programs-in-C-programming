/*
row=4

4
4 3
4 3 2
4 3 2 1

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
    //Print the row
    for(j=row;j>=row-i+1;j--)
       printf("%d ",j);
    //change line   
    printf("\n");   
   }

    return 0;
}