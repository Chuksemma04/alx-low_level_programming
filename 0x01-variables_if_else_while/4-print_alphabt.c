#include <stdio.h>

#include <stdlib.h>

#include <string.h>



/*
 *
 *  * main - putchar print Uppercase and lowercase alphabets
 *
 *   *
 *
 *    * Description: using the main function
 *
 *     * this program prints Uppercase and Lowercase Alphabets
 *
 *      * Return: 0
 *
 */



int main(void)

{

	int c;



	for (c = 97; c < 123; c++)

	{

		if (c != 101 && c != 113)

		{

			putchar(c);

		}



	}

	putchar('\n');



	return (0);

}
