#include "main.h"
/**
 * *_strcpy - copy string
 *
 * @dest: stores string
 * @src: input string
 *
 * Return:0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0, x = 0;

	while (*(src + l) != '\0')
		l++;
	for (; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);
}
