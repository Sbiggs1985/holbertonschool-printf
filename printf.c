#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - printf function output according to a format
 * @format: String with format
 * Return: number of chars to print
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
	if (format[i] == '%')
	{
		i++;

	switch (format[i])
	{
		case 'c':
		count += print_char(args);
				break;
		case 'd':
		count += d_print(args);
				break;
		case 'i':
		count += d_print(args);
				break;
		case '%':
		count += _putchar('%');
				break;
		case 's':
		count += print_string(args);
				break;
		default:
		count += _putchar('%');
		count += _putchar(format[i]);
				break;
	}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;

	}
	va_end(args);
	return (count);
	}
