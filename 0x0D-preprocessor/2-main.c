#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: the argument
 * Return: return void
 */

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar (*s);
_puts_recursion(s + 1);

}

/**
 * main - print a name of a file compiled from
 *
 * Return: 0 for Success
 */

int main(void)
{
char *s;

s = __FILE__;
_puts_recursion(s);

return (0);
}
