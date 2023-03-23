#include "main.h"

/**
 * lagest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second interger
 * @c: third integer
 * Return: largest number
 */

int largest-number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
return (largest);
}