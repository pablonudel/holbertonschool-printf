#include "main.h"
/**
 * print_str - prints all characters of a string
 * @args: list of arguments
 *
 * Return: int - length of the string
 */
int print_str(va_list args)
{
	int len = 0, i;
	char *arg = va_arg(args, char *);

	if (arg == NULL)
		arg = "(nil)";

	while (arg[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		_putchar(arg[i]);
	}

	return (len);
}
