#include "main.h"
/**
 * _putchar - print a character
 * @c: The character to be printed
 * Return: The number of characters printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - Print a character from the variadic function
 * @args: The argument
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
}
/**
 * print_string - Prints a string
 * @args: The argument
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 * _printf - the main function to be printed
 * @format: The format specifier
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				print_char(args);
				count++;
			}
			else if (format[i] == 's')
			{
				print_string(args);
				while (*va_arg(args, char *))
					count++;
			}
			else if (format[i] == '%')
				count += _putchar('%');
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
