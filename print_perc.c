#include "main.h"
/**
 * print_perc - ...
 * @args: ...
 *
 * Return: int
 */
int print_perc(va_list args)
{
	int c = va_arg(args, int);

	if (c)
		_putchar(37);

	return (1);
}
