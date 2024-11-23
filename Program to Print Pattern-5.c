/*
row=4

*****
***
**
*

*/

// //Logic 1

// #include<stdio.h>

// int main()
// {
//    int row,col,i,j;
//    printf("Enter no of rows=");
//    scanf("%d",&row);
  
//    //print pattern
//     //Iterate for each row
//    for(i=1;i<=row;i++)
//    {
//     //Print star character  
//     for(j=1;j<=row-(i-1);j++)
//        printf("*");
//     //change line   
//     printf("\n");   
//    }

//     return 0;
// }



//Logic 2

#include<stdio.h>

int main()
{
   int row,col,i,j;
   printf("Enter no of rows=");
   scanf("%d",&row);
  
   //print pattern
    //Iterate for each row
   for(i=row;i>=1;i--)
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