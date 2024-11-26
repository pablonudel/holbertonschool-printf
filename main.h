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

/**
 * struct spec_opt - ...
 * @specifier: ...
 * @convert: ...
 *
 * Description
 */
typedef struct spec_opt
{
	char *specifier;
	int (*convert)(va_list args);
} spec_opt_t;
#endif
