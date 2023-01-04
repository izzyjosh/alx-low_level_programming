#include "main.h"

/**
 * is_prime_number - checks if a nunber is a prime number
 * @n: number to check
 * Return: 1 if n is prime else 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - sub function to check if a particular
 * guess is the prime number
 * @n: number to check for prime
 * @guess: number to guess for prime
 * Return: correct prime nunber of n
 */

int check_prime(int n, int guess)
{
	if (n < 2 || (n % guess == 0 && guess != n))
		return (0);

	if (n % guess != 0 && guess > n)
		return (1);

	return (check_prime(n, guess + 1));
}
