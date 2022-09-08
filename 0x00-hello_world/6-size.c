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

	printf("size of a char: %libyte(s)",sizeof(c));
	printf("size of an int: %ibyte(s)",sizeof(i));
	printf("size of an int: %fbyte(s)",sizeof(f));
	printf("size of an int: %libyte(s)",sizeof(li));
	printf("size of an int: %llibyte(s)",sizeof(lli));
	
	return (0);
}	

