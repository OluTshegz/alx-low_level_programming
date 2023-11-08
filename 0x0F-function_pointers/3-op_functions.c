#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (0);
}

/**
 * op_sub - subtract one integer from another integer
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (0);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (0);
}

/**
 * op_div - divides an integer by another integer
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(133);
	}
	else
	{
		printf("%d\n", a / b);
		return (0);
	}
}

/**
 * op_mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(133);
	}
	else
	{
		printf("%d\n", a % b);
		return (0);
	}
}
