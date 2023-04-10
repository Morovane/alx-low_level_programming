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
	int i = 1, j, sum = 0;

	while (i < argc)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				sum =0;
				return (1);
				break;
			}
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);



}
