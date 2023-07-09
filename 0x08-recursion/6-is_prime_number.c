/**
 * is_prime_number - a function checks if number is prime or not
 * @n: is the number to  be checked
 * @i: is the the checker
 * Return: 1 if it is prime or 0 if it is not
 */

int prime_helper(long int n, long int i);

int is_prime_number(int n)

{
	if (n == 0 || n == 1 || n == -1)
		return (0);
	return (prime_helper(n, n));
}
/**
 * prime_helper - is a function that helps in checking if the number is prime
 * @n: is the number to be checked
 * @i: is the checker
 * Return: 1 if it is prime 0 or not
 */

int prime_helper(long int n, long int i)

{
	if (n == i)
		i = i / 2;
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i - 1));
}
