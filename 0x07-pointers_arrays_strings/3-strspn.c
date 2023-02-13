#include "main.h"

/** _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x;
int i;

	x = 0;
while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
			x++;
			break;
		}
		else if (accept[i + 1] == '\0')
		{
			return (x);
		}
	}
	s++;
}
return (x);
}
