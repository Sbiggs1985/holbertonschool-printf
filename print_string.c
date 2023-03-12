#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_string - writes the character
 * Description: We are printing a string without using printf
 * @s: string to be printed
 * Return: 1
 */
int print_string(va_list s)
{
	char *string;
	int i = 0;

	string = va_arg(s, char *);

	if (string == NULL)
		string = "(null)";

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
