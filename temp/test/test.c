#include <stdio.h>
#include "main.h"

int main(void)
{
    int chars_printed;

    chars_printed = _printf("Hello, world!\n");
    printf("Test 1 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("Character: %c\n", 'A');
    printf("Test 2 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("String: %s, Character: %c\n", "Hello", 'B');
    printf("Test 3 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("Empty String: %s\n", "");
    printf("Test 4 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("NULL String: %s\n", NULL);
    printf("Test 5 - Total characters printed: %d\n", chars_printed);

    return 0;
}

