/**
 * _isalpha - check if c a letter
 * @c: the value to be checked
 * Return 1 if c a letter, 0 otherwise
*/

int _isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1);
    return (0);
}