#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always return 0
 */
int main(void)
{
	long int num = 612852475143, MaxPrime, div = 2;

	while (num != 0)
	{
		if (num % div != 0)
		{
			div++;
		}
		else
		{
			MaxPrime = num;
			num = num / div;

			if (num == 1)
			{
				printf("%ld\n", MaxPrime);
				break;
			}
		}
	}
	return (0);

}
