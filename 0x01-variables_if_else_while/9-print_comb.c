#include <stdio.h>
/**
 * main - prints all possible combinations
 *        of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i < 57)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		else 
		{
			putchar(i);
		}
	}

	putchar(10);

	return (0);
}
