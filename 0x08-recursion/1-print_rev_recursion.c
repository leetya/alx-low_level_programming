#include "main.h"

void _print_rev_recursion(char *s)
{
    if (!*s)
        return;
    _print_rev_recursion(++s);
    putchar(*(s - 1));
}
