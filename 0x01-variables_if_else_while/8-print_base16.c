#include <stdio.h>

/**
 *main - returns 0 if code block is executed succesfully
 *
 *Description: Haxadecimal numbers are printed to screen using putchar
 *
 *@parameter void
 *
 *Return: Always successful 0
 *
 */

int main(void)
{
	int i;
	int n;

	for (i = 0, n = 48; i < 16; i++)
	{
		if (i >= 10)
		{
			int j = i % 10;
			int k = 97;

			putchar(j + k);
			continue;
		}

		putchar(i + n);
	}

	putchar('\n');
	return (0);
}
