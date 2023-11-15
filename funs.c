#include "main.h"
/**
 * _putchar - writes the character c to stdout
 *@arg: main argument
 * Return: On success 1 or -1
 */
int _putchar(va_list arg)
{
	char a_char = va_arg(arg, int);

	return (write(1, &a_char, 1));
}
/**
 * _putstr- function prints string
 * @arg:  arguments
 * Return: int
 */
int _putstr(va_list arg)
{
	int i, len = 0;
	char *str = va_arg(arg, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		len++;
	}
	return (len);
}
