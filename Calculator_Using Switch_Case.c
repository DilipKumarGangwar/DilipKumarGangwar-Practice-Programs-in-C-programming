//Calculator using switch-case (Using Choice as Integer)

#include<stdio.h>
int main()
{
    float a,b;
    int choice;
    //print choices
    printf("Choices are:\n");
    printf("1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
    //scan the numbers
    printf("Enter 2 numbers: ");
    scanf("%f%f",&a,&b);
    //scan the user's choice
    printf("Enter the desired operation to do: ");
    scanf("%d",&choice);
    switch(choice)
    {
      //cases with error handling 
       
       //Addition
       case 1:
              printf("Addition of %f and %f=%f",a,b,a+b);
              break;
       //Sub
       case 2:
             printf("Subtraction of  %f and %f=%f",a,b,a-b);
             break;  
       //Mult
       case 3:
             printf("Multiplication of  %f and %f=%f",a,b,a*b);
             break;
       //Div
       case 4:
             if(b==0)
               printf("Division By Zero error");
             else  
              printf("Division of  %f and %f=%f",a,b,a/b);
             break;
       default:
             printf("Please Enter Right Choice");      
            
    }
    return 0;
}

//Calculator using switch-case (Using Choice as Character + - * /)
#include<stdio.h>
int main()
{
    float a,b;
    char choice;
    //print choices
    printf("Choices are:\n");
    printf("1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
    //scan the numbers
    printf("Enter 2 numbers: ");
    scanf("%f%f",&a,&b);
    //scan the user's choice
    fflush(stdin);
    printf("Enter the desired operation to do: ");
    scanf("%c",&choice);
    switch(choice)
    {
      //cases with error handling 
       
       //Addition
       case '+':
              printf("Addition of %f and %f=%f",a,b,a+b);
              break;
       //Sub
       case '-':
             printf("Subtraction of  %f and %f=%f",a,b,a-b);
             break;  
       //Mult
       case '*':
             printf("Multiplication of  %f and %f=%f",a,b,a*b);
             break;
       //Div
       case '/':
             if(b==0)
               printf("Division By Zero error");
             else  
              printf("Division of  %f and %f=%f",a,b,a/b);
             break;
       default:
             printf("Please Enter Right Choice");      
            
    }
    return 0;
}