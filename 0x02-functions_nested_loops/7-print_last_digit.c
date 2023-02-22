#include "main.h"

/**
 * print_last_digit - Prints the last digit a particular number
 * @n: the particular number
 * Return : as stated in the task
 */

int print_last_digit(int n)

{

	int last;
	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
