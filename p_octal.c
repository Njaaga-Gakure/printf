#include "main.h"
/**
 * p_octal - prints number in octal
 * @list: argument list
 * Return: Return character count
 */

int p_octal(va_list list)
{
	unsigned int num;
	int length;
	char *str;
	char *rev_s;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	length = _strlen(num, 8);
	str = malloc(sizeof(char) * length + 1);

	if (str == NULL)
		return (-1);
	for (length = 0; num > 0; length++)
	{
		str[length] = (num % 8) + 48;
		num = num / 8;
	}
	str[length] = '\0';
	rev_s = rev_str(str);

	if (rev_s == NULL)
		return (-1);
	write_num(rev_s);
	free(str);
	free(rev_s);
	return (length);
}
