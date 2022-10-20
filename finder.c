#include "main.h"

/**
 * finder - find a corresponding function from the list.
 * @format: first argument of _printf.
 * @func_list: list of structure with format specifier and function.
 * @arg: second argument of _printf.
 * Return: total number of characters printed.
 */
int finder(const char *format, identify func_list[], va_list arg)
{
	int i, total_chars = 0, j, rv;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].fs != NULL; j++)
			{
				if (format[i + 1] == func_list[j].fs[0])
				{
					rv = func_list[j].func(arg);
					if (rv == -1)
						return (-1);
					total_chars += rv;
					break;
				}
			}
			if (func_list[j].fs == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					total_chars += 2;
				}
				else
				{
					return (-1);
				}
			}
			i++;
		}
		else 
                {
                        _putchar(format[i]);
                        total_chars++;
                }
	 }

	return (total_chars);
}
