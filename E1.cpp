/*
 * Project Euler problem 1
 *
 * If we list all the natural numbers below 10 that are multiples
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or  below 1000.
 *
 */

#include <stdio.h>
#include <set>

int sumOfMultiples(int, int, int);

int main(void)
{ 
	int res = sumOfMultiples(3, 5, 1000);
	printf("Result: %d\n", res);
}

int sumOfMultiples(int m1, int m2, int capacity)
{
	int sum = 0;
	std::set<int> numbers;
	std::set<int>::iterator it;

	for (int i=m1; i<capacity; i+=m1) {
		numbers.insert(i);
	}
	
	for (int i=m2; i<capacity; i+=m2) {
		numbers.insert(i);
	}
	
	for (it=numbers.begin(); it!=numbers.end(); ++it) {
		sum += *it;
	}

	return sum;
}
