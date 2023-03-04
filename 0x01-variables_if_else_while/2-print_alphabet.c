#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the alphabet
*
* Return: Always 0 (success)
*/

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
