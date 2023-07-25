#include <stdio.h>

char return_chars(char *s);
/**
 *rev_string - prints string in reverse order
 *@s: characters to be printed
 *Return: void
 */
void rev_string(char *s)
{
	int i, counter, tmp;
	char *a, *b;

	a = s;
	b = s;
	counter = 0;
	while (*b != '\0')
	{
		b++;
		counter++;
	}
	b--;

	for (i = 0; i < counter / 2; i++)
	{
		tmp = *a;
		*a  = *b;
		*b = tmp;
		a++;
		b--;
	}

	while (*s != '\0')
	{
		(return_chars(s));
		s++;
	}
}

/**
 *return_chars - returns characters of a string
 *@s: pointer to char variable
 *Return: character
 */
char return_chars(char *s)
{
	return (*s);
}
