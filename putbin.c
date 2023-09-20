#include "main.h"
/**
 * putbin - Calls the engine funciton
 * @num: The number to be converted and printed
 *
 * Return: The number of characters printed
 */
int putbin(unsigned int num)
{
	int nchars = 0;
	int bitposition;

	if (num == 0)
	{
		nchars += _putchar('0');
		return (nchars);
	}

	bitposition = sizeof(num) * 8 - 1;

	while ((num & (1u << bitposition)) == 0)
		bitposition--;
	for ( ;bitposition >= 0; bitposition--)
		nchars += _putchar('0' + ((num >> bitposition) & 1));

	return (nchars);
}
