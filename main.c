#include "factors.h"

/**
 * main - run the code
 *
 * Return - Always 0
 */
int main(int argc, char **argv)
{
	char *lineptr;
	size_t n;
	FILE *fp;
	unsigned long number;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <file>");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Unable to open file");
		exit(EXIT_FAILURE);
	}
	while (getline(&lineptr, &n, fp) != -1)
	{
		number = atoi(lineptr);
		if (number < ULONG_MAX)
		{
			find_factors(number);
		}
	}
	return (0);
}
