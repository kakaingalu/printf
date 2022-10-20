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
		{NULL, NULL}
	};
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	total_chars = finder(format, func_list, arg);

	va_end(arg);
	return (total_chars);
}
