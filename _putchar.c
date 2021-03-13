#include <unistd.h>

/**
 * _putchar - prints a character to std out
 * @c: the character to be printed
 * Return: On success, 1, on error, 0.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
