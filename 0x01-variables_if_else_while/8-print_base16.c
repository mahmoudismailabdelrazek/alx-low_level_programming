#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: - Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		if (i < 58 || (i > 96 && i < 103))
			putchar(i);
	}

	putchar(10);

	return (0);
}
