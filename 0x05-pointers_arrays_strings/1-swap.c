#include"main.h"
/**
 *swap_int- function that swaps two integers
 *@a: interger pointer
 *@b: integer pointer
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
