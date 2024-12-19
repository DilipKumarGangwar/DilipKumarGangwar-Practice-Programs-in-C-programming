//Print below Pattern
/*
row=4

4
4 5
4 5 6
4 5 6 7

row=5

5 
5 6
5 6 7
5 6 7 8
5 6 7 8 9


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
    for(j=row;j<=row+i-1;j++)
       printf("%d ",j);
    //change line   
    printf("\n");   
   }

    return 0;
}