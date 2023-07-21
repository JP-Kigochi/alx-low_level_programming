# include "main.h"

/**
 * print_line - draws line on terminal
 * @n: number of underscores to be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
