#include "main.h"

/**
 * _isalpha - entry point
 * @c: inputs c
 * Return: returns 0
 */

int _isalpha(int c)
{
	int i;

	int j;

	int isLower;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (j == c || j == c)
			{
				isAlpha = 1;
			}
		}
	}
	if (isLower == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
