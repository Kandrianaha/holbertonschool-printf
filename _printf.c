#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf implementation
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list arg_list; /* stores variable arguments */
	int printed_chars; /* total num of chars printed */

	if (format == NULL)
		return (-1);

	va_start(arg_list, format); /* initialise argument list */
	printed_chars = parse_format(format, f_list, arg_list);
	va_end(arg_list); /* clean up arg list */

	return (printed_chars);
}
