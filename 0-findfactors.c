#include "factors.h"

/**
 * find_factors - find two prime factors of a number
 * @num: The number to find the factors
 * Return: Nothing, void function
 */
void find_factors(unsigned long int num)
{
	unsigned long int factor1 = 2, factor2 = 0;

	while (factor1)
	{
		if (num % factor1 == 0)
		{
			factor2 = num / factor1;
			break;
		}
		factor1++;
	}
	printf("%lu=%lu*%lu\n", num, factor2, factor1);
}
