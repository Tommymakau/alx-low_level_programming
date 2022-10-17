#include <stdio.h>

/*a program that prints the lowercase alphabet in reverse, followed by a new line.*/
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
