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
unsigned long int new = 1;
unsigned long int before = 2;
unsigned long int limit = 1000000000;
unsigned long int new1, new2, before1, before2;

printf("%lu", before);

for (i = 1; i < 91; i++)
{
	printf(", %lu", new);
	new += before;
	before = new - before;
}

new1 = new / limit;
new2 = new % limit;
before1 = before / limit;
before2 = before % limit;

for (i = 92; i < 99; ++i)
{
	unsigned long int temp1 = new1;
	unsigned long int temp2 = new2;

	new1 = new1 + before1;
	before1 = temp1;

	new2 = new2 + before2;
	before2 = temp2;

	printf(", %lu", new1 + (new2 / limit));
	printf("%09lu", new2 % limit);
}

printf("\n");
return (0);
}
