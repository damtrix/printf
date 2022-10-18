#include "main.h"

/**
 * printf_HEX - prints an hexagecimal number.
 *
 * @val: arguments.
 *
 * Return: counter.
 */

int printf_HEX(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * to_reversed - Calls a function to reverse and print a string
 *
 * @list: Argument passed to the function
 *
 * Return: The amount of characters printed
 */

int to_reversed(va_list list)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * to_unsgined_num - Prints an unsigned number
 *
 * @n: unsigned integer to be printed
 *
 * Return: The amount of numbers printed
 */

int to_unsgined_num(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
