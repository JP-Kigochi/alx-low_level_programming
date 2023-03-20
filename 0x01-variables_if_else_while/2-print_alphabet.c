#include <stdio.h>
#include <string.h>

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
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		char c = str[i];

		putchar(c);
	}

	putchar('\n');

	return (0);
}
