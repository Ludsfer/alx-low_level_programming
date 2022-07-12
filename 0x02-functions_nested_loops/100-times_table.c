#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: func argument
 * Return: returns nothing
 */
void print_times_table(int n)
{
int i;
int j;
int k;

if (n >= 0 || n <= 15)
{
for (i = 0; i < n; i++)
{
_putchar ('0');
_putchar(',');
j = i;
k = 1;
while (k <= n)
{
_putchar (' ');
_putchar (' ');
_putchar(j + '0');
if (k != n)
{
_putchar(',');
}
else if (k == n)
{
_putchar ('\n');
}
j += i;
k += 1;
}
}
_putchar ('\n');
_putchar ('\n');
}
}
