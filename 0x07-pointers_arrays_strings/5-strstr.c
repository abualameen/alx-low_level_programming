#include "main.h"
/**
 * _strstr - the function scan to get the first occurance
 * @haystack: function argument
 * @needle: function argument
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *f;

	while (*needle != '\0')
	{
		f = haystack;
		while (*f != '\0')
		{
			if (*f == *needle)
			{
				return (f);
			}
			f++;
		}
		needle++;
	}
	return ('\0');
}
