#include "main.h"

void compare_numbers(int a, int b);
/**
 *print_times_table - print multiplication table
 *upto amaximum of 15
 *@n: nxn table
 *Return: void
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j;
		int result, a, b, c;


		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar('0');
				else
				{
					_putchar(' ');
					result = i * j;
					a = result / 100;
					result = result % 100;
					b = result / 10;
					c = result % 10;
					compare_numbers(a, b);
					_putchar(c + '0');
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}

/**
 *compare_numbers - compares numbers and prints
 *to screen depending on condition
 *@a: first number
 *@b: second number
 *Return: void
 */
void compare_numbers(int a, int b)
{
	if (a == 0 && b == 0)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if (a == 0 && b != 0)
	{
		_putchar(' ');
		_putchar(b + '0');
	}
	else
	{
		_putchar(a + '0');
		_putchar(b + '0');
	}
}
