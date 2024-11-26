#include "main.h"
/**
 * print_perc - ...
 * @args: ...
 *
 * Return: int
 */
int print_perc(va_list args)
{
	int arg = va_arg(args, int);

	if (arg)
		_putchar(37);

	return (1);
}
