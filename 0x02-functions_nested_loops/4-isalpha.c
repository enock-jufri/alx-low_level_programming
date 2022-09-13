#include "main.h"
/**
 * _isalpha - checks if input is uppercase
 *
 * @c: input
 *
 * Return: 0 if lowercase elase 1
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

}
