#include "main.h"

/**
 *_isdigit - checks whether a character is a digit
 *
 *@c: Character to be checked
 *
 *Return: 1 if digit , 0 otherwise
 *
 */
int _isdigit(int c)
{
        if (c >= 0 && c <= 57)
                return (1);
        else
                return (0);
}
