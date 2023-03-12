#include <unistd.h>
#include "main.h"

/**
* _putchar - function used to output a single character to output
* Description: the putchar to be used with my functions
* @c: character variable to pass to the write function
* Return: a sigle char after the function runs
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
