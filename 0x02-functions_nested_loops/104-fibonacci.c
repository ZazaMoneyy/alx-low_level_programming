#include <stdio.h>

/**
 * main - Entry point for the Fibonacci program.
 *
 * Description:
 * This program calculates and prints the Fibonacci sequence up to a certain
 * point while avoiding hardcoding. It also handles large numbers by splitting
 * them into two parts, 'new1' and 'new2' for numbers greater than or equal to
 * 1 billion, and similarly for 'before1' and 'before2'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int new1 = 0;
	unsigned long int new2 = 1;
	unsigned long int before1 = 0;
	unsigned long int before2 = 1;
	unsigned long int limit = 1000000000;
	unsigned long int temp1, temp2;

	printf("%lu", new1);

	for (i = 1; i < 100; i++)
{
		printf(", %lu", new2);

	/* Calculate the next Fibonacci number */
		temp1 = new1;
		temp2 = new2;

		new1 = new1 + before1;
		before1 = temp1;

	/* Handle large numbers by splitting into two parts */
		new2 = new2 + before2;
		before2 = temp2;

		if (new2 >= limit)
{
			new2 -= limit;
			new1 += 1;
}
}

	printf("\n");
	return (0);
}
