#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int g;
	int f, t, v, i;
	int count = 0;
	int count_1 = 0;
	int b = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		count++;
	}
	for (f = 0; accept[f] != '\0'; f++)
	{
		count_1++;
	}
	for (t = 0; t <= count; t++)
	{
		for (v = 0; v <= count_1; v++)
		{
			if (s[t] == accept[v])
			{
				counter++;
				break;
			}
		}
		if (accept[t] == '\0')
		{
			break;
		}
	}
	return (counter);
}
