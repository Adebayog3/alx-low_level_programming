#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Inspired by ALX
 * july, 23-2023
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{

int a, b;

for (a = 1; a <= size; a++)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}

for (b = 1; b <= a; b++)
{
_putchar('#');
}

_putchar('\n');
}
}
}
