#include "main.h"

/**
 * _printf -  a function that produces output according to a format.
 *
 * @format: is a character string. The format string is
 *           composed of zero or more directives.
 *
 * Return: the number of characters printed
 *         (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int number_chars_printed;
	select_v m_list[] = {
		{"c", to_char},
		{"s", to_string},
		{"%", to_percent},
		{"d", to_integer},
		{"i", to_integer},
		{"R", print_R},
		{"b", printf_bin},
		{"u", unsigned_int},
		{"o", to_octal},
		{"x", to_hex},
		{"X", to_heX},
		{NULL, NULL},
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	number_chars_printed = vprintk(format, m_list, args);
	va_end(args);
	return (number_chars_printed);
}
