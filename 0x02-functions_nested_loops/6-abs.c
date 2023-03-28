#include "main.h"

/**
 *_abs - prints absolute value
 *
 *@n: value to be made absolute
 *
 *Return: int when positive and the absolute int when negative
 *
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
