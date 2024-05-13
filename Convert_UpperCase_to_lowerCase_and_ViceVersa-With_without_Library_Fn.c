//Approach-3: Check Character is in UpperCase or in lowerCase(using Built In functions)
#include<stdio.h>
#include<ctype.h>  //header file for declaration of isupper(), islower(),tolower(),toupper()
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(isupper(ch)>0)  //check for uppercase. 
        printf("Lowercase form:%c",tolower(ch));
    else if(islower(ch)>0) //check for lowercase
        printf("Uppercase form:%c",toupper(ch));
    else                   //Invalid Input  
        printf("Invalid Input"); 
    return 0;
}

