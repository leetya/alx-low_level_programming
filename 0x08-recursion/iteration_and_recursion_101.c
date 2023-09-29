#include "main.h"

//ndir chy flag mli ykon 1 manreturnich taymatch s1 l s2 + 1;

// int wildcmp(char *s1, char *s2)
// {
//     int i, res, flag;

//     res = 1;
//     flag = 0;
//     for (i = 0; s1[i]; i++)
//     {
//         if (s1[i] == *(s2) && flag)
//             flag = 0;
//         while (*s2 == '*')
//         {
//             flag = 1;
//             s2++;
//         }
//         if (s1[i] != *s2 && !flag)
//             return (0);
//         if (!flag)
//             s2++;
//     }
//     if (*s2 && !flag)
//         return (0);
//     return res;
// }

int test(char *s, char *ss, int i, int flag)
{
    if (!*s && *ss && !flag)
        return 0;
    if (!*s)
        return 1;
    if (*s == *ss && flag)
        flag = 0;
    if (*ss == '*')
    {
        flag = 1;
        test(s, ++ss, i, flag);
    }
    if (*s != *ss && !flag)
        return (0);
    if (!flag)
        ss++;
    return (test(++s, ss, i, flag));
}

int wildcmp(char *s1, char *s2)
{
    return (test(s1, s2, 0, 0));
}

// int wildcmp(char *s1, char *s2)
// {
//     //s2 can contains a special char (*) this char can replace any string
//     //so i think i can compare one char to another if we encounter 
//     // a special char i will skip all the remaining chars till the next char
//     //and check if the s1 contain that char then continue from it.
//     //then if s1 don't have the remaining chars we'll return 0. otherwise we continue the cmparision.
//     int i;

//     for (i = 0; s1[i]; i++)
//     {
//         if (*s2 == '*')
//         {
//             ++s2;
//             i++;
//             for (; s1[i] && s1[i] != *s2; i++)
//             {
//                 if (!s1[i + 1])
//                     return (1);
//             }
//         }
//         if (s1[i] != *s2)
//             return (0);
//         s2++;
//     }
//     if (*s2)
//         return (0);
//     return (1);
// }

int main(void)
{
    int r;

    // wildcmp("hello", "world");
    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}