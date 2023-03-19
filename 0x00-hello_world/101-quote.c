#include <unistd.h>

/**
 *main - redirects error to stderror
 *
 *Description: Redirects string to stderror using the write function
 *
 *@parameterr void
 *
 *Return: Always successful 0
 *
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, 59);
	return (0);
}
