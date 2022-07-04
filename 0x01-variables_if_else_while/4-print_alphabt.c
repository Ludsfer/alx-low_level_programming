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
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		printf("%c", c);
		c++;
	}
	printf("\n");
	return (0);
}
