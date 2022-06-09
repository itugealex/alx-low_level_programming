#include "main.h"

/**
 * main - main entry point of code.
 *
 * Description: Prints putchar.
 *
 * Return: Returns zero
 *
 */

int main(void)
{
	char ch[] = {'_putchar '};
	int i =0;

	while ( i < 9)
	{
		_putchar(ch[i]);
		i++;
	}
	return (0);
}
