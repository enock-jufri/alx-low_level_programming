#include "main.h"
/**
 * _puts - prints string and newline
 *
 * @str: string parameter
 *
 * Return: 0
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		putchar(str[l]);
		l++;
	}
	putchar('\n');
}
