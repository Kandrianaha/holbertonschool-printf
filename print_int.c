#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_number - prints int number
 * @n: the int number
 * Return: int
 */

void print_number(int n)
{
	int count;

	count = 0;

	if (n < 0)
	{
		_putchar ('-');
		count++;
		n = -n;
	}

	if (n / 10) /* checks for more than one digit */
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
	count++;
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
	print_number(num);
	return (1);
}
