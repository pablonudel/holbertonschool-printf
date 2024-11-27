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
	int digit, tmp_num = arg, last_dig, pow = 1, len = 0;

	if (arg < 0)
	{
		arg = arg * -1;
		_putchar('-');
		len++;
	}

	last_dig = arg % 10;
	tmp_num = arg / 10;

	if (tmp_num > 0)
	{
		while (tmp_num / 10 != 0)
		{
			tmp_num = tmp_num / 10;
			pow = pow * 10;
		}

		tmp_num = arg / 10;
		while (pow > 0)
		{
			digit = tmp_num / pow;
			_putchar(digit + '0');
			tmp_num = tmp_num - (digit * pow);
			pow = pow / 10;
			len++;
		}
	}

	_putchar(last_dig + '0');
	return (len + 1);
}
