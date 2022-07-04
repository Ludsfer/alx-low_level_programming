#include <stdio.h>
/**
 * main - The starting point
 * description: print alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		printf("%c", c);
		c++;
	}
	printf("\n");
	return (0);
}
