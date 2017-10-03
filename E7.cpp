/*
 * Project Euler problem 7
 */

#include <stdio.h>
#include <vector>

/* Function declaration */
std::vector<int> getPrime(int);

/* Main */
int main(void)
{
	std::vector<int> primes = getPrime(20000000);
	printf("Number of primes: %d\n", (int) primes.size());
	printf("Prime number 10001: %d\n", primes[10000]);
}

/*
 * Description:
 *	Returns every prime number from 1..n
 */
std::vector<int> getPrime(int n)
{
	std::vector<int> sieve;
	std::vector<int> primes;

	// Create sieve
	for (int i=1; i<n+1; ++i)
		sieve.push_back(i);
	sieve[0] = 0;

	for (int i=2; i<n+1; ++i) {
		// Find prime number
		if (sieve[i-1] != 0) {
			primes.push_back(sieve[i-1]);
			// Set all multiples of prime to 0 in sieve
			for (int j=2*sieve[i-1]; j<n+1; j+=sieve[i-1]) {
				sieve[j-1] = 0;
			}
		}
	}
	return primes;
}


