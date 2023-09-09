#include "main.h"
/**
 * putstring - Prints a string to standard output
 * @s: Pointer to the string
 *
 * Return: number of characters printed
 */
int putstring(char *s)
{
	unsigned int n = 0;

	if (s == NULL)
		return (n);
	while (s[n])
	{
		_putchar(s[n]);
		n++;
	}
	return (n);
}
