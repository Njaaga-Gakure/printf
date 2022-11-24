#include "main.h"

/**
 * p_str - prints out a string
 * @list: argument list
 * Return: Returns number of characters
 *        in the string
 */

int p_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
