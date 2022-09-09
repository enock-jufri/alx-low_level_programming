#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	int c = EOF;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(c);
	return (0);
}
