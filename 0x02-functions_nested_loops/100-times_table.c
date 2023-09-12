#include "main.h"

/**
 * print_number - print a number with appropriate formatting
 * @num: the number to print
 */
void print_number(int num)
{
	if (num < 10)
{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
}
	else if (num >= 10 && num < 100)
{
		_putchar(' ');
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
}
	else
{
		_putchar(' ');
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
{
		for (i = 0; i <= n; i++)
{
			for (j = 0; j <= n; j++)
{
				k = j * i;
				if (j == 0)
{
					_putchar(k + '0');
}
				else
{
					_putchar(',');
					_putchar(' ');
					print_number(k);
}
}
			_putchar('\n');
}
}
}
