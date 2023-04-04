#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int sum;
	int i;

	printf("%ld, %ld", first, second);

	for (i = 0; i < 48; i++)
	{
	sum = first + second;
	printf(", %ld", sum);
	first = second;
	second = sum;
	}
	printf("\n");
	return (0);
}
