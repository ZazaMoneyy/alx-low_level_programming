#include <stdio.h>

/**
 * main - Entry point for the Fibonacci program.
 *
 * Description:
 * This program calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by commas.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int current = 1;
	unsigned long int previous = 1;
	unsigned long int temp;
	int count;

	printf("%lu", current);

	for (count = 2; count <= 98; count++)
{
		printf(", %lu", current);

	/* Calculate the next Fibonacci number */
		temp = current;
		current += previous;
		previous = temp;
}

	printf("\n");
	return (0);
}
