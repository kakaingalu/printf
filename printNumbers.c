#include "main.h"

/**
 * print_integers - prints interger
 * @arg: interger argument
 *
 * Return: total numbers of characters printed.
 */
int print_integer(va_list arg)
{
	unsigned int num;
	int n;
	int len;
	int div;

	n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	for (; num / div > 9;)
	{
		div *= 10;
	}
	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
