#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}