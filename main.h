#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);

/**
 * struct type_option - structure with type option and function pointer char.
 * @option: The type option
 * @convert_option: function pointer
 *
 * Description
 */
typedef struct type_option
{
	char *specifier;
	int (*specifier_len)(va_list args);
} type_option_t;
#endif
