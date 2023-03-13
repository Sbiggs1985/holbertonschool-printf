#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int s_print(va_list list);
int print_char(va_list c);
int countDigits(unsigned int num);
int print_number(unsigned int n);
int d_print(va_list list);
int print_percent(void);

#endif
