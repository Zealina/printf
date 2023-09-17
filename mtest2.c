#include <stdio.h>
#include "main.h"


int main() {
    int chars_printed;
    chars_printed = _printf("Unrecognized specifier: %z\n", 42);
    printf("Test 13 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("Handling %% character: %%\n");
    printf("Test 14 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("Mixing: %c %z %s %%%d\n", 'A', "Test", 100);
    printf("Test 15 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("Converting to ASCII: %c\n", 55);
    printf("Test 16 - Total characters printed: %d\n", chars_printed);

    return 0;
}

