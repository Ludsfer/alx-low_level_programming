#include <stdio.h>
/**
 * main - The starting point
 * description: print the base 10 single digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	putchar(10);
	return (0);
}
