#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculator_menu()
{
	printf("|=============================|\n");
	printf("| [1] >> Addition         (+) |\n");
	printf("| [2] >> Subtracrion      (-) |\n");
	printf("| [3] >> Division         (/) |\n");
	printf("| [4] >> Multiplication   (*) |\n");
	printf("|=============================|\n");
}

void calculator_addition()
{
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Answer is: %d", a + b);
	
}

void calculator_subtraction()
{
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Answer is: %d", a - b);
}

void calculator_division()
{
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("\nEnter second number: ");
	scanf("%d", &b);

	if (b > 0)
	{
		printf("\nAnswer is: %d", a / b);
	}
	else
	{
		printf("Caution! Division by zero!");
	}
}

void calculator_multiplication()
{
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Answer is: %d", a * b);

}

int main(void)
{
	char selection;

	calculator_menu();
	printf("Select the function number : ");
	scanf("%c", &selection);

	if (selection == '1')
	{
		calculator_addition();
	}
	else if (selection == '2')
	{
		calculator_subtraction();
	}
	else if (selection == '3')
	{
		calculator_division();
	}
	else if (selection == '4')
	{
		calculator_multiplication();
	}
	else
	{
		printf("Unknown operation");
	}


	return 0;
}