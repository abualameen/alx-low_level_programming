#include "main.h"
int main_is_palindrome(char *s, int start, int end);
int str_count(char *s);

/**
 * is_palindrome - this funntion determines if a str is palindrmn
 * @s: argument
 * Return: 0
 */

int is_palindrome(char *s)
{
	return (main_is_palindrome(s, 0, str_count(s) - 1));
}

/**
 * str_count - count the len of a str
 * @s: function argu
 * Return: count
 */

int str_count(char *s)
{
	int i = 0;
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_count(s + 1));
	}
}


/**
 * main_is_palindrome - called recuresive function
 * @s: function argu
 * @start: arugu
 * @end: argu
 * Return: 0
 */

int main_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (main_is_palindrome(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}
