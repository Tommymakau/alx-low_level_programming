#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Hexadecimal*/
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;
	char l;

	i = 48;
	while  (i < 58)
	{
		putchar(i);
		i++;
	}

	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
