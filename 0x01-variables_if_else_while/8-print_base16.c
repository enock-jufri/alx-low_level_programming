#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	
	for (ch = 0; ch < 10; ch++)
		putchar(ch + '0');
	for (ch = 'a';ch <= 'f'; ch++)
		putchar(ch);
	return (0);
}
