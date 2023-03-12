#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list i);
int print_bin(va_list b);
int print_dec(va_lst d);
int print_percent(void);

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
