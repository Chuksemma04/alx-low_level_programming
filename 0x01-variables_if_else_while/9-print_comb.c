#include <stdio.h>

/**
 * main - putchar print lowercase in reverse order
 *
 * Description: using the main function
 * this program prints base 10 numbers
 * Return: 0
 */
int main(void)
{

	int i;

	for (i = 48; i < 58; i++)

	{

		putchar(i);

		if (i != 57)

		{

			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
