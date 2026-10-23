# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int a;

	printf("Hello world!\n\n\n");

	printf("Enter number: ");
	scanf("%d", &a);

	if (a > 5) 
	{
		printf("First meaasge");
	}
	else 
	{
		printf("Second message");
	}
	

	return 0;
}