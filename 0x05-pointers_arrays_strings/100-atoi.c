#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	int sign = 1;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (num < 0) /* Check for overflow */
			{
				if (sign == 1)
					return (-1);
				else
					return (0);
			}
		}
		else if (num != 0) /* Stop if non-digit encountered after digits */
			break;
		i++;
	}

	return (num * sign);
}
