#include <stdio.h>
/**
 * main - See the printf function
 *
 * Return: 0 if successful
 */
int main(void)
{
	char *null = "charisma";


	printf(null);
	printf("\n");
	printf("Hello, I am %c yrs old", 55);
	printf("\n");
	printf("Mixing: %c %z %s %%%d\n", 'A', 42, "Test", 100);
	printf("\n");
	return (0);
}
