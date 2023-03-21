#include <stdio.h>
#include <string.h>

/**
 *main - returns 0 if code block is succesful
 *
 *Description: prints alphabet characters in reverse to screen
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
	unsigned int end = strlen(str) - 1;

	for (i = str[end]; i >= str[0]; i--)
	{

		putchar(i);
	}

	putchar('\n');

	return (0);
}
