#include <stdio.h>
/**
 * main - The starting point
 * description: print the base 16 single digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
