// C Program to design Mini Calculator using do-while loop

#include<stdio.h>

int main()
{
  float a, b;
  int choice;
  do
  { 
   printf("\nChoices:\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo(Remainder)\n");
   printf("Enter your choice:");
   scanf("%d", &choice);
  
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
      case 0: 
            printf("Exiting the program");
            break;      
      default:
        printf("You Entered Wrong choice, Please enter correct choice \n");  
   }

 } while( choice !=0);
  return 0;
}