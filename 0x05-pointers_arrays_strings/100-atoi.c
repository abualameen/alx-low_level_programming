#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
    int num = 0;
    int i = 0;
    int sign = 1;

    // Skip leading whitespace
    while (s[i] == ' ')
        i++;

    // Handle sign
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    // Process digits
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        // Check for overflow
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        num = num * 10 + digit;
        i++;
    }

    return num * sign;
}
