/**
 * print_integer - outputs an integer
 *
 * @list_args: list of arguments
 *
 * Return: int.
 */
int print_integer(va_list list_args)
{
	int len;

	len = print_number(list_args);
	return (len);
}
