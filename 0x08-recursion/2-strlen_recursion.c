#include "main.h"

/**
 * _strlen_recursion - function that return the lenght of a string
 * @s: the string
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
}
