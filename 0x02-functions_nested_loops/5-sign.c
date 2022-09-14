#include "main.h"
/**
 * print_sign - returns 1 if input is > 1, 0 if 0 and < 1 -1
 *
 * @r: input from main
 *
 * Return: 0,1,-1
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(45);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	putchar('\n');
}
