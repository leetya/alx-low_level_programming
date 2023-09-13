#include "main.h"
int main(void)
{
        int a, b, c;
        int largest;

        c = 972;
        b = -98;
        a = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
