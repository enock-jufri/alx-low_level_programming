#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int _islower(int c);
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	putchar('\n');
	return (0);
}
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

