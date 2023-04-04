#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int sum;
	int i;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 50; i++)
	{
	sum = first + second;
	if (sum < 0)
	{
		break;
	}
	printf("%d", sum);
	if (i < 50)
	{
		printf(", ");
	}
	first = second;
	second = sum;
	}
	printf("\n");
	return (0);
}
