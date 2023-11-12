#include "main.h"
/**
 * _printf - function that produces output according to format
 * @format: charcter string
 * Return: nothing integer
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(args, int)
				write(1, &c, 1);
			count++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);
			int str_len = 0;

			while (str[str_len] != '\0')
				str_len++;
			write(1, str, str_len);
			count += str_len;
		}
	}
	format++;
}
va_end(args);
return (count);
}
