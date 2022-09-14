#include "main.h"

/**
 * _isalpha - checks for alphabetic characters 
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpaha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
