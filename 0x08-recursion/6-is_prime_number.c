#include "main.h"
/**
 * _isitprime - looks for prime
 * @n: the number
 * @i: the number / 2
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int start = n / 2;
	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
/**
 ** is_prime_number - looks for prime
 * @n: the number
 * Return: 1 if orime, 0 if not
 */
int is_prime_number(int n, int start);
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start -1));
}
