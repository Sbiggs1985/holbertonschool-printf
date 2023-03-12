#include "main.h"

/**
* print_dec - function that prints out an integer
* @d: is an integer to be printed
* Description: prints out a digit using _putchar
* Return: returning the size
*/

int print_dec(va_list d)
{
	int len, x, y, d, n, count = 0, num;

	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('_');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		x = 1;
		for (y = 1; y <= len - 1; y++)
			x *= 10;
		for (y = 1; y <= len; y++)
		{
			a = n / x;i
			if (n < 0)
				_putchar(a * -1);
				_putchar((a * -1) + 48);
			else
				_putchar(a + '0');
			count++;
			n -= a * x;
			x /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
