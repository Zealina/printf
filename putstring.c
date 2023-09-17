#include "main.h"
/**
 * putstring - Prints a string to standard output
 * @s: Pointer to the string
 *
 * Return: number of characters printed
 */
int putstring(char *s)
{
	int n;

	for (n = 0; s && s[n]; n++)
		_putchar(s[n]);
	return (n);
}
