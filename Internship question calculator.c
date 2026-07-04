#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   printf("Enter first number: ");
   scanf("%d",&a);
    printf("Enter second number: ");
   scanf("%d",&b);
   char choice;
   printf("Enter the choice: ");
   scanf(" %c", &choice);

    if(choice!='+' && choice!='-' && choice!='*' && choice!='/')
    {
        printf("Enter a valid choice");
    }

   switch(choice)
   {
   case '+':
    printf("The addition is: %d", a+b);
    break;
   case '-':
    printf("The subtraction is: %d",a-b);
    break;
   case '*':
    printf("The multiplication is: %d ",a*b);
    break;
    case '/':
        if(b==0)
            printf("The divison is not possible");
        else
            printf("The division is: %d",a/b);
        break;
    default:
    printf("Invalid choice!\n");
   }
}
