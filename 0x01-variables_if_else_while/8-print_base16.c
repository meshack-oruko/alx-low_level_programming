#include <stdio.h>
/**
 * main - main program
 * Return: 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 0; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
