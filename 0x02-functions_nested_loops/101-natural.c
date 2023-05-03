#include <stdio.h>

/**
 * main - This is the main function
 * Return: Always 0, success
 */

int main(void)
{
	int a;
	int sum;

	sum = 0;

	for (a = 0 ; a < 1024 ; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
