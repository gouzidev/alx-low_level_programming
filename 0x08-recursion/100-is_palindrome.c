#include "main.h"

int verifyPal(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - returns 1 if a string is palindrome and 0 if not
 * @s: pointer
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s != '\0')
	{
	return (verifyPal(s, 0, _strlen(s) - 1));
	}
	else
	{
		return (1);
	}
}

/**
 * _strlen - gets length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * verifyPal - verifies  the characters recursively for palindrome
 * @s: string
 * @i: int
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int verifyPal(char *s, int i, int len)
{
	if (*(s + i) == '\0')
	{
		return (1);
	}
	if (*(s + i) != *(s + len))
	{
		return (0);
	}
	return (verifyPal(s, i + 1, len - 1));
}
