#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - function that prints an integer
 * @n: params an integer
 * Return: Nothing
 */

void print_number(int n)
{

	int _putchar(char c);
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}

	else
	{
		n1 = -n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
