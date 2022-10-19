#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int print_string(char *str, int *str_len);

/**
 * print_string - prints string
 * @str: useless str
 * @str_len: stores str length
 * Return: nothing
 */

int  print_string(char *str, int *str_len)
{
	int s_counter;

	if (str == NULL)
		str = "(null)";
	for (s_counter = 0; str[s_counter] != '\0'; s_counter++)
	{
		_putchar(str[s_counter]);
	}
	*str_len += s_counter++;

	return (*str_len);
}


/**
 * _printf - my Printf()
 * @format: pointer of string with formart specifier
 *
 * Return: number of char printed to standard output
 */
int _printf(const char *format, ...)
{
	char *s;
	int i, len, str_len = 0;
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	for (; *format != '\0'; format++)
	{
		while (*format != '%')
		{
			_putchar(*format);
			len++;
			format++;
		}
		format++;
		switch (*format)
		{
			case 'c':
				i = va_arg(arg, int);
				_putchar(i);
				len++;
				break;
			case 's':
				str_len = print_string(va_arg(arg, char *), &str_len);
				break;
			case '%':
				_putchar(*format);
				len++;
				break;
			default:
				_putchar(*(format - 1));
				_putchar(*format);
				len++;
				break;
		}
	}
	va_end(arg);
	return (len + str_len);
	

}
