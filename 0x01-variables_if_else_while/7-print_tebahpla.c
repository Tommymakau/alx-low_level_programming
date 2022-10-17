#include <stdio.h>

/*Smile in the mirror*/
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char l;

	l = 'z';
	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
