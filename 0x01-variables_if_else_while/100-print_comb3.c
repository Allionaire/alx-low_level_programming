#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - shows possible different combinations of 2 digits
 * Return: ALways 0 (Success)
 */

int main(void)

{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

