#include "main.h"

/**
 * _islower - Shows 1 if the input is lowercase character.
 * Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Returns:1 for lowercase character. 0 for another.
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
