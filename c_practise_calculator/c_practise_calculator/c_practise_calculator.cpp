#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* |============================================================================================================| */
/* Главное меню */
void main_menu()
{
	printf("|==========================================================|\n");
	printf("|               -={Somethig else v1.0}=-                   |\n");
	printf("|==========================================================|\n");
	printf("| [1] >> Calculator         [2] >> Comaprison              |\n");
	printf("| [?] >> ???                [?] >> ???                     |\n");
	printf("|==========================================================|\n");
}

/* |============================================================================================================| */

/* [1] >>> Калькулятор - меню, выбор, плюс, минус, деление, умножение  */
void calculator_menu()
{
	printf("|=============================|\n");
	printf("| [1] >> Addition         (+) |\n");
	printf("| [2] >> Subtracrion      (-) |\n");
	printf("| [3] >> Division         (/) |\n");
	printf("| [4] >> Multiplication   (*) |\n");
	printf("|=============================|\n");
}
 
/* [1] >> Калькулятор - сложение */
void calculator_addition()
{
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Answer is: %d", a + b);
	
}

/* [1] >> Калькулятор - вычитание */
void calculator_subtraction()
{
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Answer is: %d", a - b);
}

/* [1] >> Калькуялтор - деление */
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
		printf("\nCaution! Division by zero!");
	}
}

/* [1] >> Калькулятор - умножение */
void calculator_multiplication()
{
	int a, b;

	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Answer is: %d", a * b);
}

void calculator_selection()
{
	char calculator_selection;

	calculator_menu();
	printf("Enter function number: ");
	scanf("%c", &calculator_selection);

	if (calculator_selection == '1')
	{
		calculator_addition();
	}
	else if (calculator_selection == '2')
	{
		calculator_subtraction();
	}
	else if (calculator_selection == '3')
	{
		calculator_division();
	}
	else if (calculator_selection == '4')
	{
		calculator_multiplication();
	}
	else
	{
		printf("Unknown operation 1");
	}
}

/* |============================================================================================================| */

int main(void)
{
	char main_menu_selection;

	main_menu();

	printf("Enter operation number: ");
	scanf("%c", &main_menu_selection);

	if (main_menu_selection == '1')
	{
		calculator_selection();
	}
	else
	{
		printf("Unknown operation 2");
	}

	return 0;
}