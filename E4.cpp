/*
 * Project Euler problem 4
 */

#include <stdio.h>

/* Function declaration */
int isPalindrome(int);

/* Main */
int main(void)
{
	printf("test");
	int product;
	for (int n1=99; n1>0; n1--) {
		for (int n2=99; n2>0; n2--) {
			product = n1*n2;
			if ( isPalindrome(product) ) {
				printf("Largest palindrome: %d\n", product);
				return 0;
			}
		}
	}
	printf("There is no palindrome");
}

int isPalindrome(int number)
{
	if (number<10) return 1;
	
	int nDigits = 2;
	while (10^(nDigits) < number) {
		nDigits++;
	}
	printf("Num digits: %d\n", nDigits);
	return 1;
}
