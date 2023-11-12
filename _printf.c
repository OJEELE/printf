#include "main.h"
/**
 * _printf - function that produces output according to format
 * @format: charcter string
 * Return: nothing integer
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c' :
					putchar('(');
					putchar(va_arg(args, int));
					putchar(')');
			}
		}
		else
			putchar(*format);
		format++;
	}
	va_end(args);
	return (0);
}
