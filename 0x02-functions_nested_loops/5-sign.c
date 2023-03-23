#include "main.h"
/**
 * print_sign - Function printing sign
 * @n: paremeter
 * Return: 0 , 1 , -1
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
