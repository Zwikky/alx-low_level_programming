#include <stdio.h>

/**
 * main - Main Function --- prints all single digit numbers of base 10 starting from 0
 *
 * Return: just a 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
