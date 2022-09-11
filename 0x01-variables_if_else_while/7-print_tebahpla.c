#include <stdio.h>

/**
 * main - main entry of a program
 *
 */
int main(void)
{
	int x = 25;
	char alphabet[] = "abcdefghiklmnopqrstuvwxyz";

	while (x >=0)
	{
		putchar(alphabet[x]);
		x--;
	}
	putchar('\n');
	return (0);
}
