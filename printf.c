#include "main.h"
/**
 * _printf - Prints just like printf from stdio
 * @format: The format string
 *
 * Return: The number of bytes printed excluding the null bytes
 */
int _printf(const char *format, ...)
{
	int error;
	va_list args;
	unsigned int i = 0;
	unsigned int nchars = 0;

	if (format == NULL)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		error = 0;
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				error = _putchar(va_arg(args, int));
			else if (format[i] == 's')
				error = putstring(va_arg(args, char *));
			else if (format[i] == '%')
				error = _putchar(format[i]);
			else
			{
				error += _putchar('%');
				error += _putchar(format[i]);
			}
		}
		else
			error = _putchar(format[i]);
		if (error < 1)
		{
			va_end(args);
			return (-1);
		}
		nchars += error;
		i++;
	}
	va_end(args);
	return (nchars);
}
