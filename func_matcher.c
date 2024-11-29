#include "main.h"
/**
 * func_matcher - Match specifiers with functions
 * @format: format string
 * @i: index of the format string
 * @args: list of arguments
 * @len: current length of string
 * @options: array with specifiers and associated functions
 *
 * Return: int - for index and length
 */
int func_matcher(const char *format, int i,
		va_list args, int *len,
		spec_opt_t *options)
{
	int j = 0;

	if (format[i + 1] == '\0')
		return (*len);

	while (options[j].specifier)
	{
		if (format[i + 1] == *options[j].specifier)
		{
			*len += options[j].convert(args);
			return (i + 2);
		}
		j++;
	}

	_putchar('%');
	_putchar(format[i + 1]);
	*len += 2;
	return (i + 2);
}
