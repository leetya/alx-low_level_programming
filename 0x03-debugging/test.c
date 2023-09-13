#include "main.h"
int main(void)
{
        int a, b, c;
        int largest;

        c = 200;
        b = 290;
        a = 2000;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
