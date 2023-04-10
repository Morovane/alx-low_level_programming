#include "main.h"

/**
 * _atoi - that convert string to integer
 * @str: The string will be converted
 * Return: num * sign
 */
int _atoi(char *str)
{
	char sign = 1;
	unsigned int num = 0;

	do {
		if (*str == '-')
			sign = -1;
		else if (*str >= '0' && *str <= '9')
		{
			num = (num * 10) + (*str - 48);
		}
		else if (num > 0)
			break;
	} while (*str++);
	return (num * sign);

}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc >= 3)
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
