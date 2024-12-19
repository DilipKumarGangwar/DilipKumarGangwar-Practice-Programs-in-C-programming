//Print below Pattern
/*
row=4

3
3 4
3 4 5
3 4 5 6


row=5

3
3 4
3 4 5
3 4 5 6
3 4 5 6 7

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
    for(j=3;j<=3+i-1;j++)
       printf("%d ",j);
    //change line   
    printf("\n");   
   }

    return 0;
}