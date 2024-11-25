#include "main.h"
/**
 * print_char - ...
 * @args: va_list args
 *
 * Return: int
 */
int print_char(va_list args)
{
	return (write(1, va_arg(args, int), 1));
}
/**
 * _printf - ...
 * @format: char pointer
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list args;

	type_option_t options[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	va_start(args, format);
	
	while (format[i] && format != NULL)
	{
		j = 0;
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			while (options[j].specifier && options[j].specifier[0] == format[i + 1])
			{
				options[j].specifier_len(args);
				j++;
			}
		}
		else
			exit(98);
		_putchar(format[i]);
		i++;
	}

	va_end(args);

}
