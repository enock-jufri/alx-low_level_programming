#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (ch = 'a'; ch <= 'z';ch++)
		putchar(ch);
	_putchar('\n');
	}

}
