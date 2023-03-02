#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If s1 <= s2, the negative difference of
 * the first unmatched characters or zero if they have the same value.
 * If s1 >= s2, the positive difference or zero if they have the same value.
 */

int _strcmp(char *s1, char *s2)
{
	if ((*s1 >= *s2) && (*s1 <= *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
