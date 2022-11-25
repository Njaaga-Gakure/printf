#include "main.h"

/**
 * unsigned_int - print unsigned int
 * @list: argument list
 * Return: returns character count
 */

int unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_num(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_num(num));
}
/**
 * print_unsigned_num - prints unsigned integer
 * @num: unsigned int
 * Return: return character count
 */

int print_unsigned_num(unsigned int num)
{
	int div;
	int length;

	div = 1;
	length = 0;

	while (num / div > 9)
		div = div * 10;
	while (div != 0)
	{
		length = length + _putchar('0' + num / div);
		num = num % div;
		div = div / 10;
	}

	return (length);
}
