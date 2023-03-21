#include <stdio.h>

/**
 *main - returns 0 if code block is executed successfully
 *
 *Description: prints numbers 0 to 9 using while loop combining with a comma
 *
 *@parameter void
 *
 *Return: Always successfull 0
 *
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');

		if (i == 9)
		{
			break;
		}

		putchar(',');
		putchar(' ');
		i++;
	}

	putchar('\n');

	return (0);
}
