#include "main.h"
#include <stdio.h>
int _strlen_recursion(char *s);
int main_palindrome(char *, char *);
/**
 * is_palindrome - identify palindrome
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *se = s + (len - 1);

	return (main_palindrome(s, se));
}
/**
 * _strlen_recursion - get the length of a string
 *
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s++ == '\0')
		return (0);
	len += _strlen_recursion(s);
	len++;
	return (len);
}
/**
 * main_palindrome - function of help for indentify palindrome
 *
 * @s: string
 * @se: pointer to end char of the string
 *
 * Return: 1 if is palindrome. if not 0
 */
int main_palindrome(char *s, char *se)
{
	if (*s != *se)
		return (0);

	if (*s == '\0')
		return (1);
	return (main_palindrome(s + 1, se - 1));
}
