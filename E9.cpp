/*
 * Project Euler problem 9
 */

#include <stdio.h>

/* Function declaration */
int triplet();

/* Main */
int main(void)
{
	int res = triplet();
	printf("Result is %d\n", res);
}

/*
 *	Description:
 *		Returns product of pythagorean triplet which equals to 1000.
 *
 */
int triplet() {
	for (int a=1; a<1000; a++) {
		for (int b=a+1; b<1000; b++) {
			for (int c=b+1; c<1000; c++) {
				if ((a*a+b*b)==c*c && (a+b+c) == 1000) {
					printf("a is %d, b is %d, c is %d\n", a, b, c);
					return a*b*c;
				}
			}
		}
	}
	return 0;
}
