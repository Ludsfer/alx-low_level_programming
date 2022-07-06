#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 *@n: argument
 * Return: return absolute value of the argument.
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
