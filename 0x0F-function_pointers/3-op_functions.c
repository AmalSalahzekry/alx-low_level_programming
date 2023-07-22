#include "3-calc.h"

/**
 * op_add - the operation of add
 * @a: 1st intergar
 * @b: 2nd integer
 * Return:  the sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the differnce between a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a * b
 * @a: 1st int
 * @b: 2nd int
 * Return:  product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the divides of a by b
 * @a: 1st int
 * @b: 2nd int
 * Return: the result of the division of a by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the modul of a and b
 * @a: 1st int
 * @b: 2nd int
 * Return:  the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
