#include "main.h"

/**
 *_puts_recursion - prints a string followed by a new line
 *@s: string argument to be printed
 *Return: Always void
 */
void _puts_recursion(char *s)
{
	if (_putchar(*s++) && *s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
