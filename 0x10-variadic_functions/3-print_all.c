#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_all - prints all the arguments
 * @format: the format to check the data type
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *separator = "";
	char *str;
	va_list data_types;

	va_start(data_types, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(data_types, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(data_types, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(data_types, double));
				break;
			case 's':
				str = va_arg(data_types, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(data_types);
	printf("\n");
}
