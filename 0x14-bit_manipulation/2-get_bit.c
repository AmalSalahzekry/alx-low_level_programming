#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: the bit
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_b;

	if (index > 63)
		return (-1);

	value_b = (n >> index) & 1;

	return (value_b);
}
