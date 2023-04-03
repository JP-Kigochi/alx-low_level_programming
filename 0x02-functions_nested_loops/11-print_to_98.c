#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *
 *@n: starting integer in sequence
 *
 *Return: void
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}
