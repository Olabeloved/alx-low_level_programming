#include <stdio.h>

/**
 * main - this is for repeated digits
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
	for (j = i ; j < 100 ; j++)
	{
	if (i != j)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if (i < 99 || j < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	return (0);
}
