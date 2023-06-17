#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all alphabet letters
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
