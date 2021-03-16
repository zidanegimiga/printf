#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct convert - a type for functions and symbols
 * 
 * @sym: The operator
 *
 * @f: Associated function
 */
struct convert
{
  char *sym;
  int (*f)(va_list);
};
typedef struct convert conver_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list);
int print_modulus(va_list);
int print_string(va_list);
int printchar(va_list);

#endif /* HOLBERTON_H */
