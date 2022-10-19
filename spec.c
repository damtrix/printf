#include "main.h"
/**
 * get_specifier - finds the format function
 * @s: string of the format
 * Return: the number of bytes printed
 */
int (*get_specifier(char *s))(va_list ap, params_t *params)
{
  specifier_t specifier[] = {
			     {"c", print_char},
			     {"d", print_int},
			     {"i", print_int},
			     {"s", print_string},
			     {"%", print_percent},
			     {"b", print_binary},
			     {"o", print_octal},
			     {"u", print_unsigned},
			     {"x", print_hex},
