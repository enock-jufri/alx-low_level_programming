#include "main.h"
/**
 * puts_half - prints last half of a string
 *
 * @str: string parameter
 *
 * Return:0
 */
void puts_half(char *str)
{
	int len, n;

	while (*str != '\0')	
	{
		len++;
		str++;
	}
	if(len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (; n <= len; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
