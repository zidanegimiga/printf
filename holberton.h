#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
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
int print_int(va_list list);
int print_modulus(va_list list);
int print_string(va_list list);
int printchar(va_list list);
int print_heX(va_list list);
int hex_check(int num, char x);
int print_rot13(va_list list);
char *_memcpy(char *dest, char *src, unsigned int n);
int parser(const char *format, conver_t function_list[], va_list arg_list);


#endif /* HOLBERTON_H */
