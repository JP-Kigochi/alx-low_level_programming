#include "main.h"

/**
 *swap_int - swaps values of two integers
 *@a: first number
 *@b: second number
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
