#include "main.h"
/**
 * unsigned_int - prints unsigned integer
 * @list: argument list
 * Return: return character count
 */

int unsigned_int(va_list list)
{
	int div;
	int length;
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num < 1)
		return (-1);
	if (num == 0 || num > 0)
	{
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
	return (0);
}
