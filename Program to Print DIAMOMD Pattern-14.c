//Print below Pattern ( DIAMOND )
/*
row=4
   *
  ***
 *****
*******
 *****
  ***
   *
  
 */


// //Logic 1- Break in 3 subparts
#include<stdio.h>

int main()
{
   int row,i,j;
   printf("Enter no of rows=");
   scanf("%d",&row);

    //print pattern

   //Upper half Pyramid
   for(i=1;i<=row;i++)
   {
    //Print the spaces ( 1st part)
    for(j=1; j <= row-i;j++)
       printf(" ");
    //Print the stars ( 2nd part)
    for(j=1; j <= i;j++)
       printf("*");
    //Print the stars ( 3rd part)
    for(j=1; j <= i-1;j++)
       printf("*");       
    //change line   
    printf("\n");   
   } 

   //Lower Half Pyramid

   //Iterate for each row
   for(i=row-1;i>=1;i--)
   {
    //Print the spaces ( 1st part)
    for(j=1; j <= row-i;j++)
       printf(" ");
    //Print the stars ( 2nd part)
    for(j=1; j <= i;j++)
       printf("*");
    //Print the stars ( 3rd part)
    for(j=1; j <= i-1;j++)
       printf("*");       
    //change line   
    printf("\n");   
   }
    return 0;
}


//Logic 2- Break in 2 subparts 
//Hint: Each row has odd numbers of stars

// #include<stdio.h>

// int main()
// {
//    int row,i,j;
//    printf("Enter no of rows=");
//    scanf("%d",&row);

//    //print pattern
//     //Iterate for each row
//    for(i=row;i>=1;i--)
//    {
//     //Print spaces 
//     for(j=1; j <= row-i;j++)
//        printf(" ");
//     //Print starts
//     for(j=1; j <= 2*i-1 ;j++)
//        printf("*");       
//     //change line   
//     printf("\n");   
//    }
//     return 0;
// }