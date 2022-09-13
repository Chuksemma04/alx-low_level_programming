#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: using the main function
 * my code
 * Return: success always
 */
int main(void)
	{

	int n, lastdigit;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	lastdigit = n % 10;

	if (n % 10 > 5)

	{

	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);

	}

	else if (n % 10 == 0)

	{

	printf("Last digit of %d is %d and is 0\n", n, lastdigit);

	}

	else if (lastdigit < 6)

	{

	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);

	}

	return (0);

}
