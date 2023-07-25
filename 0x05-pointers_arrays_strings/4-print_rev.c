#include "main.h"

/**
 *print_rev - prints string in rverse order
 *@s: characters to be printed
 *Return: void
 */
void print_rev(char *s)
{
	int counter;

	counter = 0;
	do {
		s++;
		counter++;
	} while (*s != '\0');
	s--;

	while (counter >= 0)
	{
		_putchar(*s);
		s--;
		counter--;
	}
	_putchar('\n');
}
