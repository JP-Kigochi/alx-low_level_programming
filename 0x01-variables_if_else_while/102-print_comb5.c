#include <stdio.h>

/**
 *main - returns 0 when code block is executed successfully
 *
 *Description:  prints all possible combinations of two two-digit numbers
 *
 *@parameter void
 *
 * Return: Always successful 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 ? i / 10 + '0' : '0');
			putchar(i % 10 + '0');
			putchar(' ');

			putchar(j / 10 ? j / 10 + '0' : '0');
			putchar(j % 10 + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
