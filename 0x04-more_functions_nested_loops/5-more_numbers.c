#include "main.h"

/**
 *more_numbers - print numbers 0-14 ten times
 *@param void
 *Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	k = 0;

	while (k < 10)
	{
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (i > 0)
					_putchar(i + '0');
				_putchar(j + '0');
				if (i == 1 && j == 4)
					break;
			}
		}

		_putchar('\n');
	}
}
