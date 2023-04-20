#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
        va_list args;
        unsigned int i = 0, j = 0;
        char *separator = "";
        format_t fms[] = {
                {"c", print_char},
                {"i", print_integer},
                {"f", print_float},
                {"s", print_string},
                {NULL, NULL}
        };

        va_start(args, format);
        while (format && format[i])
        {
                j = 0;
                while (fms[j].fmt)
                {
                        if (*(fms[j].fmt) == format[i])
                        {
                                printf("%s", separator);
                                fms[j].printer(args);
                                separator = ", ";
                                break;
                        }
                        j++;
                }
                i++;
        }
        printf("\n");
        va_end(args);
}

void print_char(va_list args)
{
        printf("%c", va_arg(args, int));
}

void print_integer(va_list args)
{
        printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
        printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
        char *str;

        str = va_arg(args, char *);
        if (str == NULL)
        {
                printf("(nil)");
                return;
        }
        printf("%s", str);
}
