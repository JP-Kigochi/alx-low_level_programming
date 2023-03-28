#include "main.h"

/**
 *_abs - prints absolute value
 *
 *@int: value to be made absolute
 *
 *Return: int when positive and the absolute int when negative
 *
 */

int _abs(int)
{
	if (*int >= 0)
		return (*int);
	else
		return (0 - *int);
}
