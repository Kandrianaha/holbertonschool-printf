#include "main.h"
#include <unistd.h>

/**
 * print_char - Prints a single character
 * @args: va_list containing the character to print
 *
 * Return: Number of characters printed (always 1)
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1)); /* write the char to stdout */
}
