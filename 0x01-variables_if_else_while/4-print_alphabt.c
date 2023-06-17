#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all alphabet letters e q and e
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
