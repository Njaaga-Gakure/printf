#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
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

int get_str(const char *format, specify_t list[], va_list args);
int _printf(const char *format, ...);
int _putchar(char);
int p_char(va_list);
int p_str(va_list);
int p_percent(va_list);
int p_int(va_list);
int p_binary(va_list);
unsigned int _strlen(unsigned int, unsigned int);
char *_memcpy(char *, char *);
char *rev_str(char *);
void write_num(char *);
int unsigned_int(va_list);
int p_octal(va_list);
int p_hex(va_list);
int p_hexupper(va_list);
int hex_check(int, char);
#endif
