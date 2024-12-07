/*
row=4

1
2 1
3 2 1
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
    for(j=i;j>=1;j--)
       printf("%d ",j);
    //change line   
    printf("\n");   
   }

    return 0;
}