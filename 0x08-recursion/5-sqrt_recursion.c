#include "main.h"

/**
 * sqr - that find sqr
 * @n: the number
 * @root: the sqr
 * Return: root
 */
int sqr(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	else
		return (sqr(n, root + 1));
}
/**
 * _sqrt_recursion - that returns the natural square root of a number
 * @n: the number
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (sqr(n, root));
}
