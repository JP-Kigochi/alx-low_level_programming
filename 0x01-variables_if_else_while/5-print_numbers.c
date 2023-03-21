#include <stdio.h>

/**
 *main - returns 0 if code block is executed successfully
 *
 *Description: prints numbers 0 to 9 using while loop
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
		ptintf("%d", i);
		i++;
	}

	printf("\n");

	return (0);
}
