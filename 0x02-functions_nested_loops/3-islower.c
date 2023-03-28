#include "main.h"

/**
 *_islower -checks whether a character is lowercase
 *
 *@c: number to be checked
 *
 *Return: 0 when lowercase and 1 when not
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
