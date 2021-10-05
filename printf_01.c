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
char c = va_arg(args, int);
printf("%c", c);
a ++;
}
else if (*format == 's')
{
char *s = va_arg(args, char*);
if (s != NULL)
{
printf("%s", s);
a += strlen(s);
}
}
++format;
}
va_end(args);
return (a);
}
