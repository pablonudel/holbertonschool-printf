#include "main.h"
/**
 * _printf - ...
 * @format: ...
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, len = 0;
	va_list args;

	spec_opt_t options[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format[i] && format != NULL)
	{
		j = 0;
		if (format[i] == '%' && format[i + 1])
		{
			while (options[j].specifier && *options[j].specifier == format[i + 1])
			{
				len += options[j].convert(args);
				i += 2;
				j++;
			}
		}
		len++;
		_putchar(format[i]);
		i++;
	}

	va_end(args);

	return (len);

}