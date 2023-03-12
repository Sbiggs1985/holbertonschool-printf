#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - Pritning a single character without using printf
 * Description: This code will work together to check our character output
 * @c: character to be printed for the output format specifier
 * Return: 1
 */

int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}

/**
 * print_percent - percent as a format specifier for output
 *
 * Return: 1
 */

int print_percent(void)
{
	_putchar('%');
	return (1);
}
