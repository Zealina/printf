#include "main.h"
/**
 * _printf - Prints just like printf from stdio
 * @format: The format string
 *
 * Return: The number of bytes printed excluding the null bytes
 */
int _printf(const char *format, ...)
{
	while (*format)
	{
	      	if (*format == '%')
			format++;
      if (*format == '%'){
          Putchar('%')
            counter++;

      } else if (*format == 'c') //if after % is c
      {
          int ch = va_arg(args, int) //Open variable to store the args from the list
          putchar(ch) //print it
          counter++; //increase our counter
      }
      else if (*format == 's') //if after % is s so it's string 
        {
          char *str = va_arg(args, char*);//start the variable which holding the string
          while (*str) //looping over the string to print all charaters
          {
            putchar(*str); //printing the characters
            str++; //moving a step forward to print the next letter
            counter++; //keep tracking the num of letters printed
          }
  else {//if there is no % and it's a normal string
        putchar(*format); //print it as it
         counter++; //keep tracking the num of letters printed
        }

    foramt++;
}

va_end(args);
}
return counter;
