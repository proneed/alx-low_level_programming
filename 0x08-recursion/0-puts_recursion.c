#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts_recursion(char *s)
{
int i;
int j;
int length;
length = 0;
for (int i=0; s[i] != '\0'; i++)
{
    length++;
}

for (int j=0; s[j] != '\0'; j++)
{
    printf("%c", s[j]);
}
}
