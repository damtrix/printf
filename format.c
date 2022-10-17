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

/**
 * convert_to_number - used to print number
 *
 * @args: Character to print
 *
 * Return: The number of characters to print
 */

int convert_to_number(va_list args)
{
	int n;
	int d;
	int l;
	unsigned int num;

	n  = va_arg(args, int);
	d = 1;
	l = 0;

	if (n < 0)
	{
		l += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		l += _putchar('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (l);
}

/**
 * to_integer - to print integer
 *
 * @args: characters to print
 *
 * Return: the number of characters.
 */

int to_integer(va_list args)
{
	int len;

	len = convert_to_number(args);
	return (len);
}
