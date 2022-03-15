#include "main.h"

/**
 * print_last_digit - prints the last digit from the given value
 * Return: last digit
 */

int print_last_digit(int l)
{
	int num;
	
	l = num % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (l);
	}
	else
	{
		_putchar(l + 48);
		return l;
	}
}
