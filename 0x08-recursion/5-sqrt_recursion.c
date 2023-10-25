#include "main.h"

/**
 * _findsqrt - a wrapper that does the recursion bit
 * @n : input number
 * @sqr: maximum number to sqr
 * Return: square root of @n or -1
*/

int _findsqrt(int n, int x)
{
	int sqrd = x * x;

	if (sqrd == n)
		return (x);
	else if (sqrd > n)
		return (-1);
	else
		return (_findsqrt(n, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 * @n: input number
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (_findsqrt(n, 1));
}
