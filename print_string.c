#include "main.h"
#include <unistd.h>

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *s;
	int count = 0;

	s = va_arg(args, char *);

	if (s == NULL)
	s = "(null)";

	while (*s)
	{
	write(1, s, 1);
	s++;
	count++;
	}

	return (count);
}	
