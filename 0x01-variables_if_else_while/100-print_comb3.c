#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints all possible combinations of two digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48, j = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
			{

			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
