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
int printf_HEX(va_list val);
int to_binary(va_list list);
int to_octal(va_list list);
int to_hex(va_list list);
int to_heX(va_list list);
int to_check(int num, char x);
int to_reversed(va_list list);
int unsigned_int(va_list list);


int _putchar(char c);
int vprintk(const char *format, select_v m_list[], va_list args);
int convert_to_number(va_list args);
void _base(char *str);
unsigned int base_len(unsigned int num, int base);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
int to_check(int, char);
int to_unsgined_num(unsigned int n);


#endif /* MAIN_H */
