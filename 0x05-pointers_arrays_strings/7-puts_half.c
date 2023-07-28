#include "main.h"
#include <stdio.h>

int half_string(char *str);
/**
 *puts_half - prints the second half of string
 *@str: string or word to be parsed
 *Return: void
 */
void puts_half(char *str)
{
	int half_length, counter;

	counter = 0;
	half_length = half_string(str);
	do {
		str++;
		counter++;
	} while (counter != half_length);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 *half_string - returns half of the string
 *@str - string to be parsed
 *Return: half length of string
 */
int half_string(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	if (length % 2 != 0)
		return ((length / 2) + 1);
	else
		return (length / 2);
}
