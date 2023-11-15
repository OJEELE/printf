#include "main.h"
/**
 * *f_caller- function that call a function
 *@check: specifier argument
 * Return: returnsan int
 */
int (*f_caller(char check))(va_list)
{
	int idx = 0;

	f_ch fun_arr[] = {{'c', _putchar}, {'s', _putstr}, {'\0', NULL}};

	while (fun_arr[idx].specifier)
	{
		if (check == fun_arr[idx].specifier)
			return (fun_arr[idx].funt);
		idx++;
	}
	return (NULL);
}
