#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: Fifth task
 *
 * Return: Return zero
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
