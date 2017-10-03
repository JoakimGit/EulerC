/*
 * Project Euler problem 6
 */

#include <stdio.h>

/* Function declaration */
int sumSqDiff(int);

/* Main */
int main(void)
{
	int num = 100;
	int res = sumSqDiff(num);
	printf("Sum square diff of first %d numbers is %d\n", num, res);
}

/*
 *	Decription:
 *		Finds difference between sum of the squares and square of the sum
 *		of the first n numbers
 */
int sumSqDiff(int n)
{
	int current = 1;
	int sqSum = 0;
	int sumSq = 0;
	while ( current <= n ) {
		sqSum += current;
		sumSq += current*current;
		current ++;
	}
	int res = (sqSum*sqSum)-sumSq;
	return res;
}
