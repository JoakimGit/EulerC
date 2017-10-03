/*
 * Project Euler problem 4
 */

#include <stdio.h>
#include <cmath>

/* Function declaration */
int isPalindrome(int);

/* Main */
int main(void)
{
	int largest = 0;
	int product;
	for (int n1=999; n1>0; n1--) {
		for (int n2=999; n2>0; n2--) {
			product = n1*n2;
			if ( isPalindrome(product) ) {
				if (product > largest)
					largest = product;
			}
		}
	}
	if (largest)
		printf("Largest palindrome is %d\n", largest);
	else
		printf("There is no palindrome");
}

/* 
 *
 * Description: Says if a number is a palindrome.
 *
 */
int isPalindrome(int number)
{
	if (number<10) return 1;
	
	int nDigits = 2;
	while (pow(10, nDigits) < number) {
		nDigits++;
	}

	int reverse = 0;
	int digit = 0;
	int remainder = number;
	for ( int i=nDigits-1; i>=0; --i) {
		int size = pow(10,i);
		digit = (int) remainder/size;
		reverse += digit*pow(10,nDigits-i-1);
		remainder = number%size;
	}
	if (reverse == number)
		return 1;
	else
		return 0;
}
