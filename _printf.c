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
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format[i])
	{
		j = 0;
		while (options[j].specifier)
		{
			if (format[i] == '%' && *options[j].specifier == format[i + 1])
			{
				len += options[j].convert(args);
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
