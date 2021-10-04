#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>
/**
 *_printf - print function
 *@format : the format
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int i = 0;
while (*format != '\0')
{
if (*format == 'c')
{
int c = va_arg(args, int);
printf("%c\n", c);
}
else if (*format == 's')
{
char *s = va_arg(args, char*);
printf("%s\n", s);
}
++format;
i++;
}
va_end(args);
return (i);
}
