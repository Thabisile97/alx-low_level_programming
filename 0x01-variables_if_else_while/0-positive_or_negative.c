#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - function entry point
*
* Return: returns 0 (zero)
*/
/*betty style doc function main goes there */
int main(void
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	        printf("%i is Positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else 
		printf("%i is negative\n", n);
	
	return (0);
}
