#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Positive or Negative - print sign of random number
 *
 * Description: this if/else statement whether a random number is positive,
 * negative or zero.
 *
 * Return: 0 for success
*/
int main(void)
{
  /**
   * variable n has been declared
   * coding then assigns the random value.
   */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
