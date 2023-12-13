#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *express, *current;

    if (!list)
        return (NULL);

    express = list->express;

    while (express)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

        if (express->n >= value || express->express == NULL)
        {
            if (express->express == NULL)
                printf("Value found between indexes [%lu] and [%lu]\n",
                       express->index, express->index);
            else
                printf("Value found between indexes [%lu] and [%lu]\n",
                       list->index, express->index);

            current = express;
            while (current)
            {
                printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
                if (current->n == value)
                    return (current);
                current = current->next;
            }
            break;
        }

        list = express;
        express = express->express;
    }

    return (NULL);
}
