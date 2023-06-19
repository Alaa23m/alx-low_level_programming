#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet letters e q and z
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		purchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
