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
	int digit = arg, last_dig, tmp_num, pow, len = 0;

	if (arg < 0)
	{
		digit = arg * -1;
		_putchar('-');
		len++;
	}

	last_dig = digit % 10;
	tmp_num = (digit - last_dig) / 10;

	while (tmp_num > 0)
	{
		digit = tmp_num;
		while (digit % 10 != digit)
			digit = (digit - (digit % 10)) / 10;

		_putchar('0' + digit);
		len++;
		pow = 10;
		while (pow < tmp_num)
			pow = pow * 10;

		digit = digit * pow;
		tmp_num = (tmp_num * 10) - digit;

		/* working loop until n100, where two 0 are one in integer */
	}

	_putchar('0' + last_dig);
	return (len + 1);
}
