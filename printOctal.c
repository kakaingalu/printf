#include "main.h"

/** 
 * print_octal - prints octal notation.
 * @o: passes argument in the function.
 *
 * Return: 0.
 */
int print_octal(va_list arg)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(arg, unsigned int);
	m = 1073741824; /* (8 to power of 10) */
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
