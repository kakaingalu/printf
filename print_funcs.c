#include "main.h"

/**
 * print_char - prints character.
 * @arg: args
 * Return: 1 (prints a single char)
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_string - prints a string.
 * @arg: args
 * Return: total number of chars printed.
 */
int print_string(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_percent - prints a percent symbol
 * @arg: args
 * Return: 1
 */
int print_percent(__attribute__((unused))va_list arg)
{
	_putchar('%');
	return (1);
}
