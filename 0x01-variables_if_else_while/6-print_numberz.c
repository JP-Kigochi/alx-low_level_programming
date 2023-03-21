#include <stdio.h>

/**
 *main - returns 0 if code block is executed succesfully
 *
 *Description: Numbers 0 to 9 are printed to screen using putchar
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

	for (i=0, n =48; i < 10; i++)
	{
		putchar(i + n);
	}

	putchar('\n');

	return (0);
}
