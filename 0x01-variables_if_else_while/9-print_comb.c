#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Patience, persistence and perspiration*/
/**
 * main - Entry point
 *
 * Return: Always 0 
 */
int main(void)
{
	int i;

	i = 48;
	while  (i < 58)
	{
		putchar(i);
		if (i !=  57)
		{
			putchar(44);
			putchar(32);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');

	return (0);
}
