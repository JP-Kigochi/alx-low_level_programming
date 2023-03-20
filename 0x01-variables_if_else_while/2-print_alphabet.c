#include <stdio.h>

/**
 *main - returns 0 if code block is succesful
 *
 *Description: prints alphabet characters to screen
 *
 *@parameter void
 *
 *Return: Always successful 0
 *
 */

int main(void)
{
	char str[] = "abcdefghiklmnopqrstuvwxyz";

	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		putchar(c);
	}

	putchar('\n');

	return (0);
}
