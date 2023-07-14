#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - prints a text according number 
 * Return: Always (Success)
 *
 */

int main(void)

{

	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, Lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %D and is 0\n", n, Lastd);
	}
	else if (Lastd < && Lastd != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n,Lastd);
	}
	return (0);

}
