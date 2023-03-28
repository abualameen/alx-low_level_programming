#include "main.h"

/**
 * rev_string- function also rev str
 *@s: function argumnent
 */

void rev_string(char *s)
{
        char xca = s[0];
	int d;
	int count = 0; 
        int p;

        for (d = 0; s[d] != '\0'; d++)
        {
                count++;
        }
        for (p = 0; p < count; p++)
     	{
                count--;
                xca = s[p];
                s[p] = s[count];
                s[count] = xca;
        }
}
