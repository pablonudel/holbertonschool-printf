#include "main.h"
/**
 * _printf - Prints the argument according to a specifier
 * and the associated function
 * @format: a character string of zero or more directives.
 *
 * Return: int - length of the total string.
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;

	spec_opt_t options[] = {
		{"c", print_char}, {"s", print_str}, {"%", print_perc},
		{"i", print_i_d}, {"d", print_i_d}, {NULL, NULL}
	};
	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i = func_matcher(format, i, args, &len, options);
			if (i == -1)
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
