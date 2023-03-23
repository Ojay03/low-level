#include "main.h"
/**
 * print_sign - this function prints signs
 *
 * @n: parameter
 *
 * Return: 1, 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar ('-');
		_putchar (' ');
		return (-1);
	}
}
