#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct conver
{
	char *sym;
	int (*handler)(va_list);
} conver_t;

/* prototypes */
int _printf(const char *format, ...);
int parse_format(const char *format, conver_t f_list[], va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);

#endif
