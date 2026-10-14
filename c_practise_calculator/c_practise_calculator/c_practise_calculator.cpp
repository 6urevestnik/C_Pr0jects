#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculator_menu()
{
	printf("|========================|\n");
	printf("| [1] >> Addition        |\n");
	printf("| [2] >> Minus           |\n");
	printf("| [3] >> Division        |\n");
	printf("| [4] >> Multiplication  |\n");
	printf("|========================|\n");
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
	return 0;
}