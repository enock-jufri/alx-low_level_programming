#include "main.h"
/**
 * _islower - print lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

