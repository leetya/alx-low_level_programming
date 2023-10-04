#include "main.h"

char *create_array(unsigned int size, char c)
{
    char *arr;
    int i;

    if (!size)
        return (NULL);
    arr = malloc(sizeof(char) * size);
    if (!arr)
        return (NULL);
    for (i = 0; i < size; i++)
        arr[i] = c;
    return (arr);
}