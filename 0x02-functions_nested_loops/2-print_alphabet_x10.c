#include <stdio.h>
/**
 * print_alphabet - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 10; i++)
	{
	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	putchar('\n');
	}

}
