#include "main.h"
/**
 * print_sign - returns 1 if input is > 1, 0 if 0 and < 1 -1
 *
 * @r: input from main
 *
 * Return: 0,1,-1
 *
 */
int main(void)
{
  int r;

  r = print_sign(98);
  _putchar(',');
  _putchar(' ');
  _putchar(r + '0');
  _putchar('\n');
  r = print_sign(0);
  _putchar(',');
  _putchar(' ');
  _putchar(r + '0');
  _putchar('\n');
  r = print_sign(0xff);
  _putchar(',');
  _putchar(' ');
  _putchar(r + '0');
  _putchar('\n');
  r = print_sign(-1);
  _putchar(',');
  _putchar(' ');
  _putchar(r + '0');
  _putchar('\n');
  return (0);
}
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(45);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	putchar('\n');
}
