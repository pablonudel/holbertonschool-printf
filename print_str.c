#include "main.h"
/**
 * print_str - prints all characters of a string
 * @args: list of arguments
 *
 * Return: int - length of the string
 */
int print_str(va_list args)
{
	int len = 0;
	char *arg = va_arg(args, char *);

	if (!arg)
		arg = "(null)";

	while (arg[len])
	{
		_putchar(arg[len]);
		len++;
	}

	return (len);
}
