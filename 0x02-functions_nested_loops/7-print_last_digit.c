#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: function argument
 * Return: returns last digit of the argument
 */
int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
last_digit = (-1 * (n % 10));
_putchar (last_digit + '0');
return (last_digit);
}
else
{
last_digit = (n % 10);
_putchar (last_digit + '0');
return (last_digit);
}
}
