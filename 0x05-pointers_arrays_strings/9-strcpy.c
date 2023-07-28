#include "main.h"

char return_chars(char *s);
/**
 *_strcpy - copies string pointed to by one
 *argument to buffer pointed to by another
 *@dest: pointer to buffer
 *@src: pointer to string
 *Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	do {
		*(dest + i) = return_chars(src);
		src++;
		i++;
	} while (*src != '\0');

	return (dest);
}

/**
 *return_chars - returns characters of a string
 *@s: pointer to char variable
 *Return: character
 */
char return_chars(char *s)
{
	return (*s);
}
