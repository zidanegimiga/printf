#include "holberton.h"

/**
 * main - main program to test the _printf function
 *
 * Return: void
 */
int main(void)
{
	int i = 123;
	char c = 'L';
	char *str = "Hello, world!";

	_printf(" integer: %i,\nchar: %c\n string: %s\n modulus sign: \%", i, c, str);
	if(_printf != 0)
		return (1);
}
