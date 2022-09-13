#include "main.h"
/**
 * _islower - print lowercase
 *
 * Return: 0
 */
int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch++)
	{
		if (ch == c)
			return (1);
		else
			return (0);
	}
}

