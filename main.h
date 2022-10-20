#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


/**
 * struct ident - holds a format specifier and corresponding function.
 *
 * @fs: format specifier
 * @func: the function pointer.
 */
struct ident
{
	char *fs;
	int (*func)(va_list);
};
typedef struct ident identify;

int _printf(const char *format, ...);
int _putchar(char c);
int finder(const char *format, identify func_list[], va_list arg);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_char(va_list list);

#endif /*main.h*/

