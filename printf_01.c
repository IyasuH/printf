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
const char *traverse;
unsigned int i;
char *s;
int length = 0;
va_list arg;
va_start(arg, format);
for (traverse = format; *traverse != '\0'; traverse++)
{
while (*traverse != '%')
{
putchar(*traverse);
traverse++;
continue;
}
while(*traverse != '\0')
{
traverse++;
if (*traverse == 'c')
{
i = va_arg(arg, int);
printf("%c", i);
++length;
}
else if (*traverse == '%')
{
printf("%%");
++length;
}
else if (*traverse == 's')
{
s = va_arg(arg, char *);
printf("%s", s);
length += strlen(s);
if(strlen(va_arg(arg, char*)) == 0)
break;
}
}
}
va_end(arg);
return (length);
}
