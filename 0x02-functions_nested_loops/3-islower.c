#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to br checked
 * Return: 0 for lowercase charcter or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
