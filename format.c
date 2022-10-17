#include "main.h"

/**
 * to_char - to print character
 *
 * @args: characters to print
 *
 * Return: 1.
 */

int to_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * to_string - to print string
 *
 * @args: characters to print
 *
 * Return: the number of characters.
 */

int to_string(va_list args)
{
	int r;
	char *st;

	st = va_arg(args, char *);
	if (st == NULL)
		st = "(null)";
	for (r = 0; st[r] != '\0'; r++)
		_putchar(st[r]);
	return (r);
}

/**
 * to_percent - To print symbols
 *
 * @args: characters to print
 *
 * Return: 1
 */

int to_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
