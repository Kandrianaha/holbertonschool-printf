#include "main.h"
#include <unistd.h>

/**
 * print_percent - prints a percent sign
 * @args: va_list 
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}
