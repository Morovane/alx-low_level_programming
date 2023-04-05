#include "main.h"

/**
 * factorial - eturns the factorial of a given number
 * @n: numbre to calulate his fact
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
