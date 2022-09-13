#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);
	putchar('\n');
}
