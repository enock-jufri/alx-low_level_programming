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
			printf("%d, ", i);
		}
	}
	else if (n == 98)
		printf("%d, ", n);
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
}
