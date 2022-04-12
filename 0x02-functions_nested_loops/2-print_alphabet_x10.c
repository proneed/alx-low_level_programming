#include "main.h"
/**
 * print_10x - prints 10 times the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int c;
c = 0;
int alphabet;
while (c < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
c++;
_putchar('\n');
}
}

