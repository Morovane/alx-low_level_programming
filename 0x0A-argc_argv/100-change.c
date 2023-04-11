#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int NC = 0, mod, Newmod, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mod = atoi(argv[1]);
		if (mod < 0)
		{
			printf("0\n");
		}
		else
		{
			do {
				if (mod >= coins[i])
				{
					Newmod = mod % coins[i];
					NC = NC + mod / coins[i];

					mod = Newmod;
				}
				i++;
			} while (mod > 0);
		printf("%d\n", NC);

		}
	}
	return (0);
}
