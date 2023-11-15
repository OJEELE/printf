#include "main.h"
/**
 * print_dec - function prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_dec(va_list arg)
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
 *print_bin - function converts to binary
 *@arg: character argument
 *Return: int
 */
int print_bin(va_list arg)
{
	int flag = 0, count = 0, i, b, a = 1;
	unsigned int p;

	unsigned int num = va_arg(arg, unsigned int);
	
	for (i = 0; i < 32; i++)
	{
		p = ((a < (32 - i) & num);
			if (p >> (31 - i))
				flag = 1;
			if (flag)
			{
				b = p >> (31 - i);
				_putchar(b + 48);
				counter++;
			}
		}
		if (count == 0)
		{
		count++;
		_putchar('0');
		}
		return (count);
}

