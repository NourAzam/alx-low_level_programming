#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints base numbers of Hexadecimal System
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 97;
	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
