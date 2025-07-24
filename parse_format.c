#include "main.h"
#include <unistd.h>

/**
 * parse_format - Parses format string and handles format specifiers
 * @format: The format string
 * @f_list: Array of format handlers
 * @args: Arguments to print
 * Return: Number of characters printed
 */
int parse_format(const char *format, conver_t f_list[], va_list args)
{
    int i = 0, j, printed_chars = 0;

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                return (-1);

            for (j = 0; f_list[j].sym != NULL; j++)
            {
                if (format[i] == *(f_list[j].sym))
                {
                    printed_chars += f_list[j].handler(args);
                    return (-1);
                }
            }

            if (f_list[j].sym == NULL)
            {
                write(1, "%", 1);
                write(1, &format[i], 1);
                printed_chars += 2;
            }
        }
        else
        {
            write(1, &format[i], 1);
            printed_chars++;
        }

        i++;
    }

    return (printed_chars);
}

