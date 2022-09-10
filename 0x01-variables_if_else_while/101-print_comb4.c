#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 12; j < 90)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
		if (i < 8);
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

