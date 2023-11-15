#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/**
  * struct function_character - Struct function _charcter
  * @specifier: The conversion specifier
  * @funt: The function pointer
  */
typedef struct function_character
{

	char specifier;
	int (*funt)(va_list);
} f_ch;

int _printf(const char *format, ...);
int _putchar(va_list);
int _putstr(va_list);
int (*f_caller(char check))(va_list);
#endif/* MAIN_H */
