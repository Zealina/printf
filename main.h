#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int putstring(char *s);
int putint(int n);
int putbin(unsigned int num);

#endif
