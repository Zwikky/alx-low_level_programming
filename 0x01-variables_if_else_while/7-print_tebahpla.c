#include <stdio.h>

/**
 * main - Main Function --- Reverse print alphabets
 *
 * Return: just a 0
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');

	return (0);
}
