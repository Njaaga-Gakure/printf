#include "main.h"
/**
 * _strlen - calculate the length of a number
 * @n: the number
 * @base: base of the number
 * Return: returns the length of the number
 */

unsigned int _strlen(unsigned int n, unsigned int base)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
		n = n / base;
	return (i);
}
