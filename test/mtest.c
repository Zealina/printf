#include <stdio.h>
#include "main.h"


int main() {
    int chars_printed;

    chars_printed = _printf("Characters: %c %c %c\n", 'A', 'B', 'C');
    printf("Test 10 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("Strings: %s %s %s\n", "Hello", "World", "123");
    printf("Test 11 - Total characters printed: %d\n", chars_printed);

    chars_printed = _printf("Mixing: %c %s %c %s\n", 'X', "ABC", 'Y', "123");
    printf("Test 12 - Total characters printed: %d\n", chars_printed);

    return 0;
}

