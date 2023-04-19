#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (operator[0] == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);

	return (0);
}
