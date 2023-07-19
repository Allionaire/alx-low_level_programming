#include "main.h"

/**
 * Display_alphabet_x10 - shows 10 times the alphabet, in lowercase,
 * Then start a new line
 */

void display_alphabet_x10(void)

{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

