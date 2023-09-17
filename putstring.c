#include "main.h"
/**
 * putstring - Prints a string to standard output
 * @s: Pointer to the string
 *
 * Return: number of characters printed
 */
int putstring(char *s)
{
	int nchars = 0;
	unsigned int n = 0;

	while (s && s[n])
	{
		nchars += _putchar(s[n]);
		n++;
	}
	return (nchars);
}
