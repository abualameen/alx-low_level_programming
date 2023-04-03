#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		if (s[u] == c)
		{
			return (&s[u]);
		}
		else
		{
			u++;
		}
	}
	return (0);
}
