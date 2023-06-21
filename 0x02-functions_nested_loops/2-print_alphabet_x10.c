#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Description: This function prints the lowercase alphabet,
 *              and repeats this process ten times.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}

