#include "main.h"

/**
 * _putchar - prints a character to standard output
 * @c: the character to be printed
 * Return: returns 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
