#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - function that prints a formated string
 * @format: string to be formated
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list str;
	char *argstr;
	char argchar;
	int i = 0;
	int j = 0;

	va_start(str, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					argchar = (char)va_arg(str, int);
					j += _putchar(argchar);
					break;
				case 's':
					argstr = va_arg(str, char *);
					write(1, argstr, sizeof(char) * _strlen(argstr));
					j += _strlen(argstr);
					break;
				case 'f':
					j += print_double(va_arg(str, double));
					break;
				case 'd':
				case 'i':
					j += print_int(va_arg(str, int));
					break;
				default:
					j += _putchar('%');
					break;
			}
			i++;
		}
		else
			j += _putchar(format[i]);
		i++;
	}
	va_end(str);
	return (j);
}
