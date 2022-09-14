#include "main.h"
/**
 * print_to_98 - prints natural numbers upto 98
 * 
 * @n: inputs form main
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + 48);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n == 98)
		_putchar(n + 48)
	else
	{
		for (i = n; i >= 98; i++)
		{
			_putchar(i + 48)
			_putchar(44);
			_putchar(32);
		}
	}
}
