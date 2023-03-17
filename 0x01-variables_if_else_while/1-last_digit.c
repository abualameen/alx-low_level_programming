#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 * Description: 'obtain the last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int lsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsd = n % 10;
	if (lsd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lsd);
	}
	else if (lsd == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lsd);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, lsd);
	}
	return (0);
}
