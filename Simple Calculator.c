#include <stdio.h>
int main()
{
	int a,b;
	char op;
	printf("Enter the operator: ");
	scanf("%c",&op);
	printf("Enter num 1: ");
	scanf("%d",&a);
	printf("Enter num 2: ");
	scanf("%d",&b);
	switch(op)
	{
		case '+':printf("Sum of givennumbers is: ");
		printf("%d",a+b);
		break;
		
		case '-':printf("Subtraction of given numbers is: ");
		printf("%d",b-a);
		break;
		
		case '*':printf("Multiplication of given numbers is: ");
		printf("%d",a*b);
		break;
		
		case '/':printf("Division of given numbers is: ");
		printf("%d",a/b);
		break;
		
		default:printf("You have entered the wrong operator");
		break;
	}
}
