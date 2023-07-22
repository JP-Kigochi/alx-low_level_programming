#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 *@n: number of times backslash is printed on terminal
 *Return: void
 */
void print_diagonal(int n)
{
	int i,j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
				_putchar('\\');
				break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
