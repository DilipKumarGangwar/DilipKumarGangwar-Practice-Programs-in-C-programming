//C program to Check whether a character is alphabet or not(Without isalpha())
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) // or if((ch>='65 && ch<=90 || (ch>=97 && ch<=122))
    {
      printf("%c is alphabet",ch);
    }
    else
    {
      printf("%c is in Not alphabet",ch);
    } 
    return 0;
}
