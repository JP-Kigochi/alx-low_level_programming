#include "main.h"

/**
 *print_alphabet - prints lower case alphabet letters
 *
 *@param void
 *
 *Return: Always void
 *
 */

void print_alphabet(void)
{
	char alphabet[26] = 'abcdefghijklmnopqrstuvwxyz';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('%c', alphabet[i]);
	}
	_putchar('\n');
}
