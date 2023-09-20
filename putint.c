#include "main.h"
/**
 * putint - Useto process integers
 * @n: The integer to be printed
 *
 * Return: The nber of characters printed
 */
int putint(int n)
{
	int nchars = 0;

	if (n < 0)
	{
		nchars += _putchar('-');
		n = -n;
	}
	if (n >= 10)
		nchars += putint(n / 10);
	nchars += _putchar('0' + (n % 10));

	return (nchars);
}
