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

	printf("size of a char: %li byte(s)\n", sizeof(c));
	printf("size of an int: %li byte(s)\n", sizeof(i));
	printf("size of an long int: %li byte(s)\n", sizeof(li));
	printf("size of an long long int: %li byte(s)\n", sizeof(lli));
	printf("size of an float: %li byte(s)\n", sizeof(f));
	
	return (0);
}	
