#include "main.h"
int main(void)
{
        int a, b, c;
        int largest;

        c = 101;
        b = -200;
        a = -1;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
