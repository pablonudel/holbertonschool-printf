#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_perc(va_list args);
int print_i_d(va_list args);

/**
 * struct spec_opt - structure
 * @specifier: char - holds the specifier
 * @convert: int - holds the associated function
 *
 * Structure that holds the specifier selected and the associated function
 */
typedef struct spec_opt
{
	char *specifier;
	int (*convert)(va_list args);
} spec_opt_t;
#endif
