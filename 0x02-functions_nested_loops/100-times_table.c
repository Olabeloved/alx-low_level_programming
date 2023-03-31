#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n: parameter to print
 * Return: 0
 */

void print_times_table(int n)
{
	int j, k, result;

	if (n < 0 || n > 15)
	{
	for (j = 0; j <= n; j++)
	{
	_putchar('0');
	for (k = 0; k <= n; k++)
	{
	_putchar(',');
	_putchar(' ');
	result = j * k;
	if (result <= 9)
	_putchar(' ');
	if (result <= 99)
	{
	_putchar(' ');
	_putchar(result / 10 + '0');
	_putchar(result % 10 + '0');
	}
	if (result >= 100)
	{
	_putchar(result / 100 + '0');
	_putchar(result / 10 + '0');
	_putchar(result % 10 + '0');
	}
	}
	_putchar('\n');
	}
	}
}
