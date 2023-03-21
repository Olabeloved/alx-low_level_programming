#include <stdio.h>

/**
 * main - this is alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char y;

	for (y = 'a' ; y <= 'z' ; y++)
		if (y != 'q' && y != 'e')
		putchar(y);
	putchar('\n');
	return (0);
}
