#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct select - select the function with the symbol
 *
 * @symb: The symbol
 *
 * @m: The corresponding the function
 */

struct select
{
	char *symb;
	int (*m)(va_list);
};
typedef struct select select_v;


int _printf(const char *format, ...);
int to_char(va_list args);
int to_string(va_list args);
int to_percent(va_list args);
int to_integer(va_list args);
int print_R(va_list R);
int printf_bin(va_list val);


int _putchar(char c);
int vprintk(const char *format, select_v m_list[], va_list args);


#endif /* MAIN_H */
