#include "main.h"

/**
 *_islower -checks whether a character is lowercase
 *
 *@c: number to be checked
 *
 *Return: 1 when lowercase and 0 when not
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
