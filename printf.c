#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - printf function
 * @format: String to format
 * Return: number of chars to print
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
	{
		format++;

	if (*format == 'c')
	{
		char c = (char) va_arg(args, int);

		putchar(c);
		count++;
	}
		else if (*format == 's')
	{
		char *s = va_arg(args, char *);

		while (*s != '\0')
	{
			_putchar(*s);
			s++;
			count++;
	}

	}
		else if (*format == '%')
	{
		putchar('%');
		count++;
	}

	}
		else
	{
		putchar(*format);
		count++;
	}
		format++;
	}
		va_end(args);

		return (count);
	}
