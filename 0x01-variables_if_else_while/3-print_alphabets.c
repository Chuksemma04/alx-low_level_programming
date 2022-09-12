#include <stdio.h>

#include <stdlib.h>



/**
 *
 *  * main - putchar print Uppercase and lowercase alphabets
 *
 *   *
 *
 *    * Description: using the main function
 *
 *     
 *
 *      * Return: 0
 *
 */



int main(void)

{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{

		putchar(ch);

	}



	for (ch = 'A'; ch <= 'Z'; ch++)

	{

		putchar(ch);

	}



	putchar('\n');



	return (0);

}
