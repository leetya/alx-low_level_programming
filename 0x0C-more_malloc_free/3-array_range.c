#include "main.h"
#include <stdlib.h>

/**
 * array_range - values from min to max
 * @min: min val;
 * @max: max val;
 * Return: p.
*/

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min));
	if (!p)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i] = i;
	return (p);
}

#include <stdio.h>
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
