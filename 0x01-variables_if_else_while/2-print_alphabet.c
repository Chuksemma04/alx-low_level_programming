#include <stdio.h>
#include <stdlib.h>


/**
 * main - putchar print lowercase alphabets
 *
 * Description: using the main function
 * this program prints Lowercase Alphabets a-z
 * Return: 0
 */
int main(void)
{

	int i;

	for (i = 97; i <= 122; i++)

	{

		putchar(i);

	}

	putchar('\n');

	return (0);

}
