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
	int temp;

	if (n < 0)
	{
		nchars += _putchar('-');
		if (n == INT_MIN)
		{
			temp = n;
			n = -(n / 10);
			nchars += putint(n);
			nchars += _putchar('0' + (-(temp % 10)));
			return (nchars);
		}
		else
		{
			nchars += _putchar('-');
			n = (-1) * n;
		}
	}
	if (n >= 10)
		nchars += putint(n / 10);
	nchars += _putchar('0' + (n % 10));

	return (nchars);
}
