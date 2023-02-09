#include "holberton.h"
/**
 * string_toupper - Change lowercase letters to uppercase in a string
 * @p: String that will be capitalized
 * Return: char var
 */
char *string_toupper(char *p)
{
int i;
	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		p[i] = p[i] - 32;
	}
	return (p);
}
