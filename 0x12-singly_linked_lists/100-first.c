#include "lists.h"

void __attribute__((constructor)) print_befor_main(void);

/**
 * print_befor_main - Prints a string before the
 *        main function is executed.
 */
void print_befor_main(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
