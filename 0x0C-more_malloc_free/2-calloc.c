#include "main.h"
#include <stdlib.h>
/**
 * _calloc - the function allocates memory to an arry
 * @nmemb: function argument
 * @size: function argument
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
        void *matr;
        unsigned char *y;
        unsigned int t;

	if (nmemb == 0 || size == 0)
        {
                return (NULL);
        }
        matr = malloc(nmemb * size);
        if (matr == NULL)
        {
                return (NULL);
        }
        y = (unsigned char *) matr;
        for (t = 0; t < nmemb * size; t++)
        {
                y[t] = 0;
        }
	return (matr);
}
