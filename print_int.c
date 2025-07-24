#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_number - prints int number
 * @n: the int number
 * Return: int
 */

int print_number(int n)
{
	int count;

	count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n / 10) /* checks for more than one digit */
	{
		count += print_number (n / 10);
	}

	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_int - print integers
 * @args: the variable list with integer to print
 * Return: print number of characters
 */

int print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	return (print_number(num));
}
