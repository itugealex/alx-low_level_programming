#include "main.h"
#include <stdio.h>
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
	string str = "_putchar ";
	int i =0;

	while ( i < 9)
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
