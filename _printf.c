#include "main.h"

/**
 * _printf - formats and prints data
 * @format: string containing format specifiers
 * Return: returns character count
 */

int _printf(const char *format, ...)
{
	int char_count;
	specify_t list[] = {
		{"c", p_char},
		{"s", p_str},
		{"%", p_percent},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	char_count = get_str(format, list, args);

	va_end(args);
	return (char_count);
}


