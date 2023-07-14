#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: print alphabet in lowercase then in uppercasie
 *
 *  Return: Always O (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar (CH);
		CH++;
	}
	putchar('\n');
i
	return (0);
}
