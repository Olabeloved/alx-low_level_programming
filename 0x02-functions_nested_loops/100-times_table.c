#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n: parameter to print
 * Return: 0
 */

void print_times_table(int n)
{
	int j, k, result, remainder;

	if (n >= 0 && n <= 15)
	{
	for (j = 0; j <= n; j++)
	{
	for (k = 0; k <= n; k++)
	{
		result = j * k;
		if (result < 10)
		{
		if (k != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(result + '0');
		}
		else if (result < 100)
		{
		if (k != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');
		}
		else
		{
		_putchar(' ');
		_putchar(result / 100 + '0');
		remainder = result % 100;
		_putchar(remainder / 10 + '0');
		_putchar(remainder % 10 + '0');
		}
		if (n != k)
		{
		_putchar(',');
		}
	}
	_putchar('\n');
	}
	}
}
