#include "main.h"

/**
 * is_div - is the number divisible by any number axept 1
 * @n: the number who to test
 * @div: numbre who divise
 * Return: 0 if is divisibel or 1 else
 */
int is_div(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div > num / 2)
		return (1);
	else
		return (is_div(n, div + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: parametre
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	else
		return (is_div(n, div));

}
