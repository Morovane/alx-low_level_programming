#include "main.h"

/**
 * main - Entry piont
 *
 *Return: always 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		int ui3 = i % 3;
		int ui5 = i % 5;

		if ((ui3 == 0) && (ui5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((ui3 == 0) && (ui5 != 0))
		{
			printf("Fizz ");
		}
		else if ((ui5 == 0) && (ui3 != 0))
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
