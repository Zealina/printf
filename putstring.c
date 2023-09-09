#include "main.h"
/**
 * putstring - Prints a string to standard output
 * @s: Pointer to the string
 *
 * Return: number of characters printed
 */
int putstring(char *s)
{
	int error = 0;
	unsigned int n = 0;

	if (s == NULL)
		return (n);
	while (s[n])
	{
		error =	_putchar(s[n]);
		if (error == -1)
			return (-1);
		n++;
	}
	return (n);
}
