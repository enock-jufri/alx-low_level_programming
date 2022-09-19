#include "main.h"
/**
 * int_strlen - length of string
 *
 * @s: string parameter
 *
 * Return:0
 */
int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
