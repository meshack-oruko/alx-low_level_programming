#include <stdio.h>
/**
 * main- my main function
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (1 == 9)
			putchar(1 + '0');
		else
		{	putchar(i + '0');
			putchar(',');
			putchar(' ');

		}
	}
	return (0);
}
