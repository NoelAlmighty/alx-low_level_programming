#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - prints a-z in caps, then small
 * Return: 0 Always (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <='Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	Return (0);
}
