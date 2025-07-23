# _printf

## About this project
This group project recreates the standard library's printf function. The following conversion specifiers are used: 

| Specifier | Description |
|-----------|---------|
| `c` | prints a single character |
| `s` | prints a string |
| `%` | prints a percent on its own (not modifier) |
| `d` | prints decimal numbers|
| `i` | prints integers |

## Project files
| File | Description |
|------|-------------|
| `main.h` | A header file containing the prototypes and `typedef struct what_format` |
| `get_form_func.c` | A function that determines which format specifier function to call |
| `form_func.c` | A compilation of all functions needed for the conversion specifiers of `_printf` |
| `_putchar.c` | A function that prints a char using `write` similar to standard library `putchar` |
| `_printf.c` | A function that prints anything similar to standard library `printf` |

## Usage
* Prints a string to the standard output following a given format
* Returns the number of characters in the output string upon success. Otherwise, the function will return -1.

```
_printf("input");
```

### Prototype
```
int _printf(const char *format, ...)
```

### Compilation
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

### Flowchart



















## Authors
- [Ashleigh Henna](https://github.com/ashleigh6734)
- [Karen Andrianaharison](https://github.com/Kandrianaha)
- [Tran Nguyen](https://github.com/tranbnn)

