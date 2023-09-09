#include "main.h"
/**
 * _printf - Prints just like printf from stdio
 * @format: The format string
 *
 * Return: The number of bytes printed excluding the null bytes
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int nchars = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				nchars += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				nchars += putstring(va_arg(args, char *));
			else if (format[i] == '%')
				nchars += _putchar(format[i]);
			else
			{
				nchars += _putchar('%');
				nchars += _putchar(format[i]);
			}
		}
		else
			nchars += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (nchars);
}
