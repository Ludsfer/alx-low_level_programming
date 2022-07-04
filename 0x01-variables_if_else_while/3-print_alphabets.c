#include <stdio.h>
/**
 * main - The starting point
 * description: print alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
	while (c <= 'z')
	{
		printf("%c", c);
		c++;
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		printf("%c", C);
	}
	printf("\n");
	return (0);
}
