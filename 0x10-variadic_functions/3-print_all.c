#include <stdarg.h>
#include <stdio.h>

/* Function prototypes */
void print_char(va_list args, int *printed);
void print_int(va_list args, int *printed);
void print_float(va_list args, int *printed);
void print_string(va_list args, int *printed);

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
int printed = 0;

va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c')
print_char(args, &printed);
else if (format[i] == 'i')
print_int(args, &printed);
else if (format[i] == 'f')
print_float(args, &printed);
else if (format[i] == 's')
print_string(args, &printed);
i++;
}
va_end(args);
printf("\n");
}

/**
 * print_char - prints a character
 * @args: the list of arguments
 * @printed: flag to check if something has been printed
 */
void print_char(va_list args, int *printed)
{
if (*printed)
printf(", ");
printf("%c", va_arg(args, int));
*printed = 1;
}

/**
 * print_int - prints an integer
 * @args: the list of arguments
 * @printed: flag to check if something has been printed
 */
void print_int(va_list args, int *printed)
{
if (*printed)
printf(", ");
printf("%d", va_arg(args, int));
*printed = 1;
}

/**
 * print_float - prints a float
 * @args: the list of arguments
 * @printed: flag to check if something has been printed
 */
void print_float(va_list args, int *printed)
{
if (*printed)
printf(", ");
printf("%f", va_arg(args, double));
*printed = 1;
}

/**
 * print_string - prints a string
 * @args: the list of arguments
 * @printed: flag to check if something has been printed
 */
void print_string(va_list args, int *printed)
{
char *str = va_arg(args, char *);
if (*printed)
printf(", ");
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
*printed = 1;
}

