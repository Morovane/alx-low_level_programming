#include "variadic_functions.h"


void print_integer(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_integer - that print int
 * @arg: argument type of va_list
 * Return: void
 */
void print_integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_char - that print character
 * @arg: argument type of va_list
 * Return: void
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * print_float - that print double
 * @arg: argument type of va_list
 * Return: void
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}
/**
 * print_str - that print string
 * @arg: argument type of va_list
 * Return: void
 */
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that print all type of argument past into
 * @format: is the type of argument
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	unsigned int i = 0, j;
	char *separator = "";
	prt_t form[] = {{"i", print_integer},
		{"c", print_char},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(ar, format);
	while (format[i] != '\0')
	{
		j = 0;

		while (j < 4 && *(format + i) != *(form[j].symb))
			j++;

		if (j < 4)
		{
			printf("%s", separator)
			form[j].print(ar);
			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(ar);
}
