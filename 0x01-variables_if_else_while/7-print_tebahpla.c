#include <stdio.h>
/**
 * main - The starting point
 * description: print alphabet in lower case reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
