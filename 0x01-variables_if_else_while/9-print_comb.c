#include <stdio.h>

/**
 * main - Main Function --- prints all possible combinations of single-digit numbers
 *
 * Return: just a 0
 */
int main(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
		if (k != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
