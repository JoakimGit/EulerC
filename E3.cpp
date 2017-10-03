/*
 * Project Euler problem 3
 * 
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of number 600851475143?
 *
 */

#include <stdio.h>
#include <vector>

/* Function declaration */
std::vector<long> findPrimes(long number);

/* Main */
int main(void)
{
	std::vector<long> primes = findPrimes(600851475143);
	std::vector<long>::iterator it;

	for (it=primes.begin(); it<primes.end(); ++it) {
		printf("Prime: %lu\n", *it);
	}
}

/*
 * Description:
 * Factorize the number with n until saturated,
 * then continue with n+1 until n²>number.
 * Add prime numbers 
 */
std::vector<long> findPrimes(long number) {
	std::vector<long> primevector;
	long n = 2;

	while (number%n == 0) {
		primevector.push_back(n);
		number /= n;
	}

	n = 3;
	while (n <= number) {
		if (number%n == 0) {
			primevector.push_back(n);
			number /= n;
		}
		else n+=2;
	}

	return primevector;
}




