#include "lists.h"
void first_b4_main(void) __attribute__((constructor));
/**
 * first_b4_main - prints some str befor main runs
 * Return: void
 */


void first_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
