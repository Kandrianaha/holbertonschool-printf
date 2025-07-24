#include "main.h"
#include <unistd.h>

/**
 * print_string - Prints a string
 * @args: va_list containing the string
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;
	
	if (s == NULL);
	s = "(null)";
	
	while (s[i])
	{
		write(1, &s[i++], 1);
	}
	
	return (i);
}
