#include "main.h"

/**
 *_strlen - returns length of string
 *@s: pointer to characters
 *Return: number of characters in a string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
