#include "main.h"

/**
* print_int - function that prints out an integer
* @i: is an integer to be printed
* Description: prints out a digit using _putchar
* Return: returning the size
*/

int print_int(va_list i)
{
	int len = 0, x, y, d, n, num, count = 0;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		len = 0;
		num = n;
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
			d = n / x;
			if (n < 0)
				_putchar(d * -1);
			else
				_putchar(d + '0');
			count++;
			n -= d * x;
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
