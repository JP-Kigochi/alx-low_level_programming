#include "main.h"

/**
 *_isupper - check whether a character is in uppercase
 *
 *@c - character undergoing check
 *
 *Return: 1 if uppercase, 0 otherwise
 *
 */

int main _isupper(char c)
{
        if (c >= 65 && c <= 90)
                return (1);
        else
                return (0);
}