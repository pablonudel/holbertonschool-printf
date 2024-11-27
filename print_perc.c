#include "main.h"
/**
 * print_perc - prints %
 * @args: list of arguments
 *
 * Return: int - 1 as length
 */
int print_perc(va_list args)
{
	int arg = va_arg(args, int);

	arg = '%';

	_putchar(arg);
	return (1);
}
