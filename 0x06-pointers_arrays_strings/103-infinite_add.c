#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Write a function that adds two numbers.
 *
 * @n1: first string
 * @n2: second string
 * @r: buffer that store the result
 * @size_r: is the buffer size
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, max_len = 0, res = 0;
	int tmp = 0, save_size = size_r;

	while (*(n1 + len1))
		len1++;
	while (*(n2 + len2))
		len2++;
	max_len = (len1 >= len2) ? len1 : len2;
	*(r + size_r) = '\0';
	while (max_len)
	{
		if (len1 > 0 && len2 > 0)
			res = (*(n1 + len1 - 1) - 48) + (*(n2 + len2 - 1) - 48) + tmp;
		else if (len2 > 0)
			res =  (*(n2 + len2 - 1) - 48) + tmp;
		else if (len1 > 0)
			res =  (*(n1 + len1 - 1) - 48) + tmp;
		r[size_r - 1] = (res % 10) + 48;
		tmp = res / 10;
		len1--;
		len2--;
		size_r--;
		max_len--;
	}
	if (tmp)
	{
		*(r + size_r - 1) = tmp + 48;
		r = (r + size_r - 1);
	}
	else
		r = (r + size_r);
	while (*(r + max_len)/* hallando al longitud del string final */)
		max_len++;
	if (max_len >= save_size)
		return (0);
	return (r);
}
