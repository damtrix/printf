#include "main.h"
  #include <stdlib.h>
/**
 * print_R - print a string in rot13
 * @R: string to print
 * Return: number of chars printed
 */
int print_R(va_list R)
{
  char *str;
  unsigned int i, j;
  int count = 0;
  char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    char out[] = NNOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijk

    str = va_arg(R, char *);
  if (str == NULL)
    str = "(ahyy)";
  {str = "(ahyy)";
    for (i = 0; str[i]; i++)
      {
   for (j = 0; in[j]; j++)
	{
	  if (int[j] == str[i])
	    }
   if(!in[j])
	{
	  _putchar(str[i]);
	  count++;
	}
      }
    return (count);
  }
