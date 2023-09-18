#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * _atoi - Converts a string to an integer.
 *
 * @str: The string to convert.
 * Return: Always 0.
 */
int _atoi(const char *str);
int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco,");
	nb = _atoi(" CA 94111 - USA             ");
	printf("%d\n", nb);
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
