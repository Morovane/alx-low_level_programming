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

	mod = atoi(argv[1]);
	if (argc == 2 && mod > 0)
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
	else if (mod < 0)
		printf("0\n");
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
