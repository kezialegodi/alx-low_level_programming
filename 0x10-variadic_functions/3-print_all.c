#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * prints_all - prints anything.
 * @format: a list of all arguements passed to the function.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s, *separator;
	va_start(args, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", va_arg(args int));
				break;
			case 'i':
				printf("%s%d", va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", va_arg(args, double));
				break;
			case 's'
				s = va_arg(args, char *);

				if (s == NULL)
					s = "(nil)"
					printf("%s%s", separator, s);
					break;
			default:
					i++;
					continue;
		}
		separator = ", ";
		i++;
	}
	print("\n");
	va_end(args);
}
