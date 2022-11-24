#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 *  struct specify - struct that defines formats
 *                   and corresponding functions
 * @sym: format
 * @f: corresponding function
 */

typedef struct specify
{
	char *sym;
	int (*f)(va_list);
} specify_t;

int get_str(const char *format, specify_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int p_char(va_list);
int p_str(va_list);
int p_percent(va_list);


#endif
