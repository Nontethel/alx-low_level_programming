#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point 
 *
 * return: always 1
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar\n, 2015-10-19", 59);
	return (1);
}

