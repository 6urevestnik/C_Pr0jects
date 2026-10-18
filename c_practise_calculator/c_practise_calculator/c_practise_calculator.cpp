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

	if (b != 0)
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

/* [1] >> Калькулятор - выбор */
void calculator_selection()
{
	char calculator_selection;

	calculator_menu();
	printf("Enter function number: ");
	scanf(" %c", &calculator_selection);

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

/* [2] >>> Сравнение чисел - главное меню, выбор функции, сравнение 2 чисел, трёх чисел, умное сравнение */

/* [2] >> Сравнение чисел - меню */
void comparison_menu()
{
	printf("|====================================|\n");
	printf("| [1] >> Comparison two numbers      |\n");
	printf("| [2] >> Comparison three numbers    |\n");
	printf("| [3] >> Clever comparison           |\n");
	printf("|====================================|\n");
}

/* [2] >> Сравнение чисел - сравнение двух чисел */
void comparison_two_numbers()
{
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("Largest is %d\n smallest is %d\n", a, b);
	}
	else
	{
		printf("Largest is %d\n smallest is %d\n", b, a);
	}
}

/* [2] >> Сравнение чисел - сравнение трех чисел */
void comparison_three_numbers()
{
	int a, b, c;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	{
		printf("Largest is %d\n", a);
	}
	else if (b > a && b > c)
	{
		printf("Largest is %d\n", b);
	}
	else
	{
		printf("Largest is %d\n", c);
	}

}

/* [2] >> Сравнение чисел - умное сравнение */
void clever_comparison()
{
	int a, b, c, largest, smallest, middle;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("\n");

	if (a > b && a > c)
	{
		largest = a;
		if (b > c)
		{
			middle = b;
			smallest = c;
		}
		else
		{
			middle = c;
			smallest = b;
		}
		printf("Largest is %d\nMiddle number is %d\nSmallest is %d\n", largest, middle, smallest);
	}
	else if (b > a && b > c)
	{
		largest = b;
		if (a > c)
		{
			middle = a;
			smallest = c;
		}
		else
		{
			middle = c;
			smallest = a;
		}
		printf("Largest is %d\nMiddle is %d\nSmallest is %d\n", largest, middle, smallest);
	}
	else if (c > a && c > b)
	{
		largest = c;
		if (a > b)
		{
			middle = a;
			smallest = b;
		}
		else
		{
			middle = b;
			smallest = a;
		}
		printf("Largest is %d\nMiddle is %d\nSmallest is %d\n", largest, middle, smallest);
	}
}

/* [2] >> Сравнение чисел - выбор функции */
void comparison_selection()
{
	int comparison_selection;

	comparison_menu();

	printf("Enter function number: ");
	scanf("%d", &comparison_selection);

	if (comparison_selection == 1)
	{
		comparison_two_numbers();
	}
	else if (comparison_selection == 2)
	{
		comparison_three_numbers();
	}
	else if (comparison_selection == 3)
	{
		clever_comparison();
	}

}

/* |============================================================================================================| */

int main(void)
{
	char main_menu_selection;

	main_menu();

	printf("Enter operation number: ");
	scanf(" %c", &main_menu_selection);

	if (main_menu_selection == '1')
	{
		calculator_selection();
	}
	else if (main_menu_selection == '2')
	{
		comparison_selection();
	}
	else
	{
		printf("Unknown operation 2");
	}

	return 0;
}