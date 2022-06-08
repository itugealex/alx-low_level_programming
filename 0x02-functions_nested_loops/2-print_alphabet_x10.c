#include <main.h>

/**
 * main - code entry point
 *
 * Description: Sample code
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 0;

	while( i < 10)
	{
		char j;
		for( j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
