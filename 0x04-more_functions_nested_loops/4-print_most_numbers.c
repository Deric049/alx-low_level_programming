<<<<<<< HEAD
#include "main.h"
/**
 * print_most_numbers - print 0 - 9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
=======
#include "main.h"

/**
 * print_most_numbers - print 0 - 9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
>>>>>>> 7c5b6fa969e5652c3163cf6e4d82b4e61d401172
