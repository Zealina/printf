#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_string(va_list args);
void print_char(va_list args);

#endif
