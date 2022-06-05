#include <stdio.h>

/**
 * main- class entry point
 *
 * Description: task number seven. Print the size of various data types.
 *
 * Return: Returns Zero.
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)\n", sizeof(char));
	printf("Size of a int: %2d byte(s)\n",  sizeof(int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %2d byte(s)\n", sizeof(float));
	
	return 0;
}
