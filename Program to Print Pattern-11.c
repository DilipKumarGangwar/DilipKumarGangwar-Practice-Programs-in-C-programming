//Print below Pattern
/*
row=4
A
A B
A B C
A B C D
*/


//Logic 1
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
    char ch='A';
    //Print the row
    for(j=1;j <= i;j++)
    {
       printf("%c ",ch);
       ch++;
    }
    //change line   
    printf("\n");   
   }
    return 0;
}

// Logic 2
// #include<stdio.h>

// int main()
// {
//    int row,i,j;
//    printf("Enter no of rows=");
//    scanf("%d",&row);
//    //print pattern
//     //Iterate for each row
//    for(i=1;i<=row;i++)
//    {
//     //Print the row
//     for(j='A';j <= 'A' + i - 1;j++)
//        printf("%c ",j);
//     //change line   
//     printf("\n");   
//    }

//     return 0;
//  }

//Logic 3
// #include<stdio.h>

// int main()
// {
//    int row,i,j;
//    printf("Enter no of rows=");
//    scanf("%d",&row);
//    //print pattern
//     //Iterate for each row
//    for(i=1;i<=row;i++)
//    {
//     //Print the row
//     for(j=1;j <= i;j++)
//        printf("%c ",'A'+j-1);
//     //change line   
//     printf("\n");   
//    }

//     return 0;
// }