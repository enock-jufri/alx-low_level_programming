#include "main.h"
/**
 * puts2 - prints each char in newline
 *
 * @s: string parameter
 *
 * Return:0
 */
void puts2(char *str)
{
	int l = 0;
	char *y = str;
	int len = 0;
	int z = 0;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0; z <= l; z++)
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
	}
}
