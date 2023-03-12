#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
 *
 *
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
