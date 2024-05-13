// C Program to design Mini Calculator using while loop

#include<stdio.h>
int main()
{
   float a, b;
   int choice;
   printf("\nChoices:\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo(Remainder)\n");
   printf("Enter your choice:");
   scanf("%d", &choice);
  while(choice != 0)
  {   
    switch(choice)
   {
      case 1: 
         printf("Enter 2 numbers: ");
         scanf("%f%f", &a, &b);
         printf("Addition: %f\n", a + b);
         break;
      case 2: 
         printf("Enter 2 numbers: ");
         scanf("%f%f", &a, &b);
         printf("Subtraction: %f\n", a - b);
         break;
      case 3: 
        printf("Enter 2 numbers: ");
        scanf("%f%f", &a, &b);       
        printf("Multiplication: %f\n", a * b);
        break;
      case 4:
        printf("Enter 2 numbers: ");
        scanf("%f%f", &a, &b);  
        if(b!=0)     
          printf("Division: %f\n", a / b); 
        else
          printf("Division not possible\n");
        break;  
      case 5:
        printf("Enter 2 numbers: ");
        scanf("%f%f", &a, &b);     
        if(b!=0)     
          printf("Division: %d\n", (int)a % (int)b); 
        else
          printf("Division not possible\n");
        break;  
       
      default:
        printf("You Entered Wrong choice, Please enter correct choice \n");  
   }  //switch
   
    printf("\nChoices:\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo(Remainder)\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
   
 }  //while
 printf("Exiting the program"); 
  return 0;
}