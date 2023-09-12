#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - Prints the alphabet without q and e.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("d%", i);
	}
	putchar('\n');
	return (0);
}
