#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers
 * @separator: character who separate the numbers
 * @n: number of argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator != NULL)
			printf("%d%s", va_arg(var, int), separator);
		else if (i == n - 1 || separator == NULL)
			printf("%d", va_arg(var, int));
	}
	va_end(var);
	printf("\n");
}
