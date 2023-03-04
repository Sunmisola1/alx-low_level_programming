#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int c;
	char d;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	d = 'a';
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
