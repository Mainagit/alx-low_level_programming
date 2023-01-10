#include "main.h"

/**
 *_isalpha - tests if c alphabetic character
 *@c:argument passed to test with
 *Return: 1 (success)
 */

int _isalpha(int c)
{
    char lower, upper;
    int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
