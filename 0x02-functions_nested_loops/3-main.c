#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function of the program.
 *              It calls the _islower function to check
 *              The results are printed using _putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

