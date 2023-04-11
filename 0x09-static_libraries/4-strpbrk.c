#include "main.h"
/**
 * _strpbrk - the function scan to get the first occurance
 * @s: function argument
 * @accept: function argument
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *f;

	while (*s != '\0')
	{
		f = accept;
		while (*f != '\0')
		{
			if (*s == *f)
			{
				return (s);
			}
			f++;
		}
		s++;
	}
	return ('\0');
}

