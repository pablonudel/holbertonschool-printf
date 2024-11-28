#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct spec_opt - structure
 * @specifier: char - holds the specifier
 * @convert: int - holds the associated function
 * structure that holds the specifier selected and the associated function
 */
typedef struct spec_opt
{
	char *specifier;
	int (*convert)(va_list);
} spec_opt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_perc(va_list);
int print_i_d(va_list);
int func_matcher(const char *format,
		int i, va_list args,
		int *len,
		spec_opt_t *options);
#endif
