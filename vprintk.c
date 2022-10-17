#include "main.h"

/**
 * vprintk - Receive the string containing symbol and some other parameter
 *           to be used for processing.
 *
 * @format: The string to print out
 *
 * @m_list: The list of function
 *
 * @args: The chaacters to print
 *
 * Return: The number of string characters
 */

int vprintk(const char *format, select_v m_list[], va_list args)
{
	int k, j, val, number_chars_printed = 0;

	for (k = 0; format[k] != '\0'; k++)
	{
		if (format[k] == '%')
		{
			for (j = 0; m_list[j].symb != NULL; j++)
			{
				if (format[k + 1] == m_list[j].symb[0])
				{
					val = m_list[j].m(args);
					if (val == -1)
						return (-1);
					number_chars_printed += val;
					break;
				}
			}
			if (m_list[j].symb == NULL && format[k + 1] != ' ')
			{
				if (format[k + 1] != '\0')
				{
					_putchar(format[k]);
					_putchar(format[k + 1]);
					number_chars_printed
						= number_chars_printed + 2;
				}
				else
					return (-1);
			}
			k++;
		}
		else
		{
			_putchar(format[k]);
			number_chars_printed++;
		}
	}
	return (number_chars_printed);
}
