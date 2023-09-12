#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
	int i, j;

	for (i = 0; i <= n; i++)
{
		print_row(i, n);
}
}
}

/**
 * print_row - prints a single row of the times table
 * @row: the row number
 * @n: the maximum value for the times table
 */
void print_row(int row, int n)
{
int j;

for (j = 0; j <= n; j++)
{
	int result = row * j;

	print_cell(result);
	if (j < n)
{
		_putchar(',');
		_putchar(' ');
}
}

_putchar('\n');

}

/**
 * print_cell - prints a cell of the times table
 * @value: the value to print
 */
void print_cell(int value)
{
	if (value < 10)
{
		_putchar(' ');
		_putchar(' ');
		_putchar(value + '0');
}
	else if (value < 100)
{
		_putchar(' ');
		_putchar((value / 10) + '0');
		_putchar((value % 10) + '0');
}
	else
{
		_putchar((value / 100) + '0');
		_putchar(((value / 10) % 10) + '0');
		_putchar((value % 10) + '0');
}
}
