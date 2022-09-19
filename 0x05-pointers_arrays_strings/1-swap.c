#include "main.h"
/**
 * swap_int - swaps ints for two numbers
 *
 * @a: parameter a
 * @b: parameter b
 *
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
