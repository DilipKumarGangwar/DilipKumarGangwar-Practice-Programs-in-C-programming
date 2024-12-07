/*
row=4

1
1 2
1 2 3
1 2 3 4


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
    for(j=1;j<=i;j++)
       printf("%d ",j);
    //change line   
    printf("\n");   
   }

    return 0;
}