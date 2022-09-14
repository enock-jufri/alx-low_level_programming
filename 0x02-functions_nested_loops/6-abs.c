#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		printf("%d", n * -1);
	else if (n > 0)
		putchar(n);
	else
		putchar('0');
	return (0);
}
