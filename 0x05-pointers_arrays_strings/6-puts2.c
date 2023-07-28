#include "main.h"

/**
 *puts2 - prints after every other character
 *@str: word to be parsed through
 *Return: void
 */
void puts2(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*str);
		str++;
		counter++;
	}
	_putchar('\n');
}
