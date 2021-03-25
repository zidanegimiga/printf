#include "holberton.h"

/**
 * print_hex - prints a base 10 number in base 16
 *
 * @list: list of arguments
 *
 * Return: number of printed characters
 */
int print_hex(va_list list)
{
  unsigned int num;
  int len;
  int rem_num;
  char *hex_rep;
  char *rev_hex;
  
  num = va_arg(list, unsigned int);
  
  if (num == 0)
    return (_putchar('0'));
  if (num < 1)
    return (-1);
  len = base_length(num, 16);
  hex_rep = malloc(sizeof(char) * len + 1);
  if (hex_rep == NULL)
    return (-1);
  for (len = 0; num > 0; len++)
  {
    rem_num = num % 16;
    if (rem_num > 9)
    {
      rem_num = hex_check(rem_num, 'x');
      hex_rep[len] = rem_num;
    }
    else
      hex_rep[len] = rem_num;
      num = num / 16;
  }
  hex_rep[len] = '\0';
  rev_hex = rev_str(hex_rep);
  if (rev_hex == NULL)
    return (-1);
  _base(rev_hex);
  free(hex_rep);
  free(rev_hex);
  return (len);
}
