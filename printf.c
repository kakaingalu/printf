#include "main.h"

/**
 * _printf - prints chars to starndard output.
 * @format: a formarted string.
 *
 * Return: total number of chars.
 */
int _printf(const char *format, ...)
{
	int total_chars;
identify func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{"b", print_binary},
		{NULL,NULL}
		 /**
		 * {"r", print_reversed},
		 * {"R", rot13},
		 * {"u", unsigned_integer},
		 * {"o", print_octal},
		 * {"x", print_hex},
		 * {"X", print_hex},
		 */
	};
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	total_chars = finder(format, func_list, arg);

	va_end(arg);
	return (total_chars);
}
