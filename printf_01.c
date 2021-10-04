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
int a = 0;
va_list args;
va_start(args, format);
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
else
printf("unknown format");
continue;
++format;
a++;
}
va_end(args);
return (a);
}
