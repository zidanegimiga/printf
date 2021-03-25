#include "holberton.h"

/**
 * _printf - a function that prints characters, strings, integers, 
 * octal and hexadecimal values onto the output screen.
 *
 * @format: A string of characters used as specifiers which determine
 * the nature of the output.
 *
 * Description: This is a variadic function. Please find the function prototype
 * in the README file or in the man document.
 *
 * Return: Number of charactes printed.
 */
int _printf(const char *format, ...)
{
  int char_no; // Number of printed characters
  conver_t f_list[] = { //f_list is the array of functions of format specifiers
    {"s", print_string},
    {"c", printchar},
    {"d", print_int},
    {"i", print_int},
    {"%", print_modulus},
    {"u", unsigned_integer},
    {"b", print_binary},
    {"r", print_reversed},
    {"R", print_rot13},
    {"o", print_octal},
    {"x", print_hex},
    {NULL, NULL}
  }
      
  va_list arg_list;
  
  if (format == NULL)
      return (-1);
  
  va_start(arg_list, format);
  
  chars = parser(format, function_list, arg_list);
  va_en(arg_list);
  return (chars);
}
