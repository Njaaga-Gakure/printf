#include "main.h"

/**
 * p_char - prints out a character
 * @list: argument list
 * Return: returns character number
 */

int p_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
