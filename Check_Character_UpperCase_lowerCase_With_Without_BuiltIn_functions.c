//Comment necessary parts to run the program

//Approach 1:Program to Check Character is in UpperCase or in lowerCase(using Nested if else)
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')  //check for uppercase
        printf("%c is in Uppercase",ch);
    else
    {
        if(ch>='a'&&ch<='z') //check for lowercase
          printf("%c is in Lowercase",ch);
        else                   //Invalid Input  
            printf("Invalid Input"); 
    }
    return 0;
}



//Approach 2:Program to Check Character is in UpperCase or in lowerCase(using else if)
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')  //check for uppercase
        printf("%c is in Uppercase",ch);
    else if(ch>='a'&&ch<='z') //check for lowercase
        printf("%c is in Lowercase",ch);
    else                   //Invalid Input  
        printf("Invalid Input"); 
    return 0;
}



//Approach-3: Check Character is in UpperCase or in lowerCase(using Built In functions)
//isupper() returns integer value > 0 ,if character is in uppercase , else returns 0
//islower() returns integer value > 0 ,if character is in lowercase , else returns 0
#include<stdio.h>
#include<ctype.h>  //header file for declaration of isupper(), islower()
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(isupper(ch)>0)  //check for uppercase. 
        printf("%c is in Uppercase",ch);
    else if(islower(ch)>0) //check for lowercase
        printf("%c is in Lowercase",ch);
    else                   //Invalid Input  
        printf("Invalid Input"); 
    return 0;
}