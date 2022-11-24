#include "main.h"

/**
 * p_int - prints an integer
 * @list: argument list
 * Return: character count
 */

int p_int(va_list list)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(list, int);

	div = 1;
	len = 0;

	if (n < 0)
	{
		len = len + _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len = len + _putchar('0' + num / div);
		num = num % div;
		div = div / 10;
	}
	return (len);
}
