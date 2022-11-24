#include "main.h"

/**
 * get_str - formats data based on format specifier
 * @format: string containing the format specifier
 * @list: stucture containing format specifiers and functions
 * @args: arguments passed
 * Return: returns character count
 */

int get_str(const char *format, specify_t list[], va_list args)
{
	int i, j, r_val, char_count;

	char_count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; list[j].sym != NULL; j++)
			{
				if (format[i + 1] == list[j].sym[0])
				{
					r_val = list[j].f(args);
					if (r_val == -1)
						return (-1);
					char_count += r_val;
					break;
				}
			}
			if (list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_count = char_count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			char_count++;
		}
	}
	return (char_count);
}
