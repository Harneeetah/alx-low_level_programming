#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int idx1 = 0, idx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[idx1])
	{
		for (idx2 = 0; idx2 <= 7; idx2++)
		{
			if (str[idx1] == leet[idx2] ||
			    str[idx1] - 32 == leet[idx2])
				str[idx1] = idx2 + '0';
		}

		idx1++;
	}

	return (str);
}
