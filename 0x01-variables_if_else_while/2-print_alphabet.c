#include <stdio.h>
/**
 * main - to print character
 *
 * Return: always 0
 */
int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}