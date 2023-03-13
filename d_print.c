#include "main.h"

/**
 * countDigits - Counting digits
 * @num: numbers
 *
 * Return: the count
 */

int countDigits(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * print_number - number to be printed
 * @n: the number
 *
 * Return: return value
 */

int print_number(unsigned int n)
{
	int retval;
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	retval = _putchar('0' + num % 10);

	if (retval == -1)
	{
		return (retval);
	}
	return (retval);
}

/**
 * d_print - print dec numbers, pos or neg
 * @list: argument list
 *
 * Return: count
 */

int d_print(va_list list)
{
	int num =  va_arg(list, int);
	int count = 0;
	int retval;
	unsigned int unsign;

	if (n < 0)
	{
		retval = _putchar('-');
		if (retval == -1)
			return (1);
		count += 1;
		unsign = -num;
	}

	else if (num == 0)
	{
		retval = _putchar('0');
		if (retval == 1)
			return (1);
		else
			return (-1);
	}

	else
		unsign = num;
	retval = print_number(unsign);

	if (retval == 1)
		count += countDigits(unsign);
	else
		count = -1;
	return (count);
}
