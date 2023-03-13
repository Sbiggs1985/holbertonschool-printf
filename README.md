_printf Function
The _printf function is a custom implementation of the standard printf function from the C standard library. It takes a format string and a variable number of arguments, formats the string according to the conversion specifiers, and prints the resulting string to the standard output.
Usage
The function is declared as follows:
int _printf(const char *format, ...);

The first argument is a string that may contain conversion specifiers (e.g., %d, %s, %c, %x, etc.), and the subsequent arguments are values to be formatted and printed. The function returns the number of characters printed.
Functions
The following functions are used to implement the _printf function:
int _putchar(char c);

This function writes a character to the standard output. It returns the number of characters written.

int s_print(va_list list);

This function prints a string to the standard output. It takes a va_list argument that contains a single argument of type char * (the string to be printed).

int print_char(va_list c);


This function prints a single character to the standard output. It takes a va_list argument that contains a single argument of type int (the character to be printed).

int countDigits(unsigned int num);

This function counts the number of digits in an unsigned integer. It takes an unsigned integer as its argument and returns the number of digits.

int print_number(unsigned int n);

This function prints an unsigned integer to the standard output. It takes an unsigned integer as its argument and returns the number of characters printed.

int d_print(va_list list);

This function prints a decimal number to the standard output. It takes a va_list argument that contains a single argument of type int (the number to be printed).

int print_percent(void);

This function prints a single percent sign (%) to the standard output. It does not take any arguments.

Flowchart:

      +---------------+
              |   _printf()   |
              +---------------+
                      |
                      | parse format string
                      |
         +------------------------+
         |     loop for each     |
         |  conversion specifier |
         +------------------------+
                      |
         +------------+------------+
         |                         |
+---------------+        +---------------+
| s_print(va_list|        | d_print(va_list|
|     list)     |        |     list)     |
+---------------+        +---------------+
                      |
         +------------+------------+
         |                         |
+---------------+        +---------------+
| print_char(va_l|        | print_number( |
|       ist c)   |        | unsigned int n)|
+---------------+        +---------------+
                      |
         +------------+------------+
         |                         |
+---------------+        +---------------+
|print_percent()|        | countDigits() |
+---------------+        +---------------+


Example Usage:

#include "holberton.h"

int main(void)
{
    int count = _printf("Hello, %s!\n", "world");
    _printf("Number of characters printed: %d\n", count);
    return (0);
}

In this example, the _printf function is used to print a string ("Hello, world!\n") to the standard output, with a variable format specifier ("%s") that is replaced with the string "world". The function returns the number of characters printed, which is then printed to the standard output.

Authors and Contributors:
Kristina Fortney & Stephaine Bigss

Project Status, Known Bugs 
We are working to get question 0 to pass the checkers.
