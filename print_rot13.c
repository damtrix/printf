#include "main.h"

/**
 * print_R - print a string in rot13
 * @R: string to print
 * Return: number of chars printed
 */

int print_R(va_list R)
{
	char *str;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = " NNOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijk";
	int i, j;

	str = va_arg(R, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == in[j])
			{
				_putchar(out[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
}
