#include "main.h"

/**
 * rev_string- function also rev str
 *@s: function argumnent
 */

void rev_string(char *s)
{
        char ica = s[0];
        int d = 0;
	int count = 0;
        int p;

        for (d = 0; d != '\0'; d++)
        {
                count++;
        }
        for (p = 0; p < count; p++)
        {
                count--;
                ica = s[p];
                s[p] = s[count];
                s[count] = ica;
        }
}
