#include "main.h"
/**
 * _printf - Prints the argument according to a specifier
 * and the associated function
 * @format: a character string of zero or more directives
 *
 * Return: int - length of the total string
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, len = 0;
	va_list args;

	spec_opt_t options[] = {
		{"c", print_char}, {"s", print_str}, {"%", print_perc},
		{"i", print_i_d}, {"d", print_i_d},
		{NULL, NULL}
	};

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[i])
	{
		j = 0;

		/* to match into the specifiers */
		while (options[j].specifier)
		{
			if (format[i] == '%' && *options[j].specifier == format[i + 1])
			{
				/* each associated function should print the arg */
				len += options[j].convert(args);
				/* jump to next character after specifier */
				i += 2;
			}
			j++;
		}
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}
