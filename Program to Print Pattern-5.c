/*
row=4

****
 ***
  **
   *

*/

// //Logic 1 : Rows are numbered starting from 1, 2,3 ..

#include<stdio.h>

int main()
{
   int row,col,i,j;
   printf("Enter no of rows=");
   scanf("%d",&row);
  
   //print pattern
    //Iterate for each row
   for(i=1;i<=row;i++)
   {
      //Print spaces   
     for(j=1;j<=i-1;j++)
        printf(" ");
     //Print star character  
     for(j=1;j<=row-(i-1);j++)
       printf("*");
    //change line   
    printf("\n");   
   }

    return 0;
}



//Logic 2 : Rows are numbered starting from 4,3,2,1 i.e in reverse order

// #include<stdio.h>

// int main()
// {
//    int row,col,i,j;
//    printf("Enter no of rows=");
//    scanf("%d",&row);
  
//    //print pattern
//     //Iterate for each row
//    for(i=row;i>=1;i--)
//    {
//     //Print spaces   
//     for(j=1;j<=row-i;j++)
//        printf(" ");
//     //Print star character  
//     for(j=1;j<=i;j++)
//        printf("*");
//     //change line   
//     printf("\n");   
//    }

//     return 0;
// }