#include "main.h"
/**
 * _strcmp - this function compares two string
 * @s1: first argument
 * @s2: second argment
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	if ((s1[0] - s2[0]) == 0)
	{
		return (s1[0] - s2[0]);
	} 
	else if ((s1[0] - s2[0]) < 0)
	{
		return (s1[0] - s2[0]);
	}
	else if ((s1[0] - s2[0]) > 0)
	{
		return (s1[0] - s2[0]);
	}
	else if (s2[0] - s1[0] == 0)
 	{
		return (s2[0] - s1[0]);
	}
	else if (s2[0] - s1[0] < 0)
	{
		return (s2[0] - s1[0]);
	}
	else if (s2[0] - s1[0] > 0)
	{
		return (s2[0] - s1[0]);
	}
	else if (s1[0] - s1[0] == 0)
	{
		return (s1[0] - s1[0]);
	}
        else if (s1[0] - s1[0] < 0)
	{
		return (s1[0] - s1[0]);
	}
	else if (s1[0] - s1[0] > 0)
	{
		return (s1[0] - s1[0]);
	}
}
