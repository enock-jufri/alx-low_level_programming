#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n < 9)
		{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		}
	}
	putchar('$');
	return (0);
}
