#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int  i;
	float f;
	long int li;
	long long int lli;

	printf("size of a char: %libyte(s)\n", sizeof(c));
	printf("size of an int: %libyte(s)\n", sizeof(i));
	printf("size of an float: %libyte(s)\n", sizeof(f));
	printf("size of an long int: %libyte(s)\n", sizeof(li));
	printf("size of an long long int: %libyte(s)\n", sizeof(lli));
	
	return (0);
}	

