#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Shows numbers  0 to 9, letters a to f.
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

