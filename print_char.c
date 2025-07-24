#include "main.h"
#include <unistd.h>

/**
 * print_char - Prints a single character
 * @args: va_list containing the character to print
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
