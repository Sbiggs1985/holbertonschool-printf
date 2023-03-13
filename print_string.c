#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * s_print - writes the character
 * Description: We are printing a string without using printf
 * @s: string to be printed
 * Return: 1
 */
int s_print(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0;
	int retval;

	if (!str)
		str = "(null)";

	while (*str)
	{
		retval = _putchar(*str);
		if (retval == -1)
			return (-1);
		count++;
		str++;
	}
	return (count);
}
