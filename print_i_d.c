#include "main.h"
/**
 * print_i_d - ...
 * @args: ...
 *
 * Return: int
 */
int print_i_d(va_list args)
{
	int arg = va_arg(args, int);
	int number = arg;
	int len = 0, i = 0;

	if (number < 0)
	{
		number = number * -1;
		_putchar('-');
		len++;
	}

	while (number % 10 != number)
	{
		number = (number - (number % 10)) / 10;
		len++;
		i++;
	}

	/* So far I have the first number and the length of the integer. */

	return (len + 1);
}
