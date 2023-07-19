#include "main.h"

/**
 * display_sign - displays the sign of a number
 * @n: int to check
 * Return: 1 and displays + if n is greater than zero
 * 0 and displays 0 if n is zero
 * -1 and displays - if n is less than zero
 */

int Display_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

