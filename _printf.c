#include "main.h"
/**
 * _printf - function that produces output according to format
 * @format: charcter string
 * Return: nothing integer
 */
int _printf(const char *format, ...)
{
	int len, idx = 0;
	char check;

	va_list arg;
	va_start(arg, format);
	
	if (format == NULL)
		return (1);
	for (; format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			idx++;
			check = format[idx];
			if (check == 'c' || check == 's')
			{
				len += (f_caller(check))(arg);
			}
		}
		else
		{
			write(1, &format[idx], 1);
			len++;
		}
	}
	va_end(arg);
	return (len);
}
