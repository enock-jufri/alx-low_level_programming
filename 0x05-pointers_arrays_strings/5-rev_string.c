#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: string parameter
 *
 * Return:0
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
