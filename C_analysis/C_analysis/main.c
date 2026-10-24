# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void iq_test()
{
	int a;

	printf("Enter your IQ: ");
	scanf("%d", &a);
	printf("%s\n", a >= 100 ? "Norm" : "Function unavailabel");
}

void if_test()
{
	int a;

	printf("Hello world!\n\n\n");

	printf("Enter number: ");
	scanf("%d", &a);

	if (a > 5)
	{
		printf("First meaasge\n");
	}
	else
	{
		printf("Second message\n");
	}

	printf("Third messge\n");
}


int main(void)
{
	iq_test();
	return 0;

}
	



