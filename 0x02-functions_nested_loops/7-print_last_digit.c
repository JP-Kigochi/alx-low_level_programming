#include "main.h"

/**
 *print_last_digit - prints last digit in given number
 *
 *@n: number to be parsed to retrieve last digit
 *
 *Return: last digit of given number
 *
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
