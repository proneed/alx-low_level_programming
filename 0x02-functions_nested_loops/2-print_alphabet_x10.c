#include "main.h"
/**
 * print_10x - prints 10 times the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int alphabet;
int counter;

counter = 0;
while (counter < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
counter++;
_putchar('\n');
}
}
