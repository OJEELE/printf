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
/**
 * print_37- function prints %
 * Return: returns int
 */
int print_37(void)
{
	_putchar(37);
	return (1);
}
/**
 * print_int - function prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;

	int i = 1;
	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		last = -last;
		n = -n;
		i++;
	}
	if (num > 10)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar (last + '0');
	return (1);
}
/**
 * Print_b - function converts to binary
 * @arg: argument to be converted
 * Return: integer
 */
int print_b(va_list char)
{
	int flag = 0, count = 0, i;
	int a = 1, b;
	unsigned int num = va_arg(char, unsigned int);

	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a < (32 - i) & num);
				if (p >> (32 - i))
				flag = 1;				flag = 1;
				if (flag)
				{
				b = p >> (31 - i);
				_putchar( b + 48);
				count++;
				}
				}

