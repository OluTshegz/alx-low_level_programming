#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int strcount = 0;

	while (s[strcount] != '\0')
	{
		strcount++;
	}
	return (strcount);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i = 0, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1), len2 = _strlen(s2), len = len1 + len2 + 1;
	result = calloc(len, sizeof(int));
	if (result == NULL)
		return (1);
	while (i <= len1 + len2)
		result[i] = 0, i++;
	len1 = len1 - 1;
	while (len1 >= 0)
	{
		digit1 = s1[len1] - '0', carry = 0, len2 = _strlen(s2) - 1;
		while (len2 >= 0)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10, carry /= 10, len2--;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
		len1--;
	}
	i = 0;
	while (i < len - 1)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
		i++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
