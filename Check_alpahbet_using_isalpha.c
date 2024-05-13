//Approach-2
//C program to Check whether a character is alphabet or not using isalpha()
#include<stdio.h>
#include<ctype.h> //header file containing declaration of isalpha()
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(isalpha(ch)==0)  //isalpha returns 0 if passed character is not alphabet, else return non zero value
    {
      printf("%c is Not alphabet",ch);
    }
    else
    {
      printf("%c is alphabet",ch);
    } 
    return 0; 
}