#include "main.h"
/**
 * print_char - prints one character
 * @args: list of arguments
 *
 * Return: int - 1 as length
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
