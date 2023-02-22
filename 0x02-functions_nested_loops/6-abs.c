#include "main.h"

/**
 * _abs - computes the absolute value
 * @c: the number to be checked
 * Return: as stated in the task
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
