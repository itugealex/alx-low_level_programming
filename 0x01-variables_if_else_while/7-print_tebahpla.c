#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Eight task
 *
 * Return: zero
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
