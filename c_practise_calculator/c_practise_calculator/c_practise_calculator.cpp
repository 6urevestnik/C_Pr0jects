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
	printf("Answer: ");
	printf("%d\n", a + b);
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


	return 0;
}