#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then omits q and e,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
