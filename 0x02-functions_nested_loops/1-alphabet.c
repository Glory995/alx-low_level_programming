#include "main.h"
/**
 * print_alphabet - the function to print abc in lower case
 *
 * return: 0
 */
void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
}
