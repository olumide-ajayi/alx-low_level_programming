#include "main.h"

/**
 * main - printing alphabet
 *
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
