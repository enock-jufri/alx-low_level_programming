#include "main.h"
/**
 * puts2 - prints each char in newline
 *
 * @s: string parameter
 *
 * Return:0
 */
void puts2(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		putchar(s[l]);
		putchar('\n');
		l++;
	}
}
