#include "main.h"
char *del_char_special(char *s);
char *ignore_char(char *s, char *c, char *);
/**
 * wildcmp -  compares two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: 1 if can be considered iondetical. 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *save = "h";

	if (*s2 == '*')
	{
		s2 = del_char_special(s2);

		s1 = ignore_char(s1, s2, save);
	}
	if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
/**
 * del_char_special - delete special character(*)
 *
 * @s: pointer to special character
 *
 * Return: pointer to the next position to the special character
 */
char *del_char_special(char *s)
{
	if (*s != '*')
		return (s);
	return (del_char_special(s + 1));
}
/**
 * ignore_char - ignore optional character
 *
 * @s: pointer to first optional character
 * @c: special character
 * @save: save the last optional character
 *
 * Return: pointer to the next position to the optional characters
 */
char *ignore_char(char *s, char *c, char *save)
{
	if (*s == *c && *(c + 1) == '*')
		return (s);
	if (*s == *c && *(c + 1) != '*')
	{
		save = s;
	}
	if (*s == '\0')
		return (save);
	return (ignore_char(s + 1, c, save));
}
