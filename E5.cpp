/*
 * Project Euler problem 5
 */

#include <stdio.h>

/* Function declaration */
int evenlyDiv(void);

/* Main */
int main(void)
{
	int res = evenlyDiv();
	printf("Smallest number is: %d\n", res);
}

/*
 *
 * Decription: return smallest positive number that is evenly divisable by
 *			   numbers from 1 to 20.
 *
 */
int evenlyDiv(void)
{
	int current = 1;
	int done = 0;
	int evenDiv;

	while ( !done ) {
		for ( int i=1; i<=20; i++ ) {
			if ( current%i != 0 ) {
				current++;
				break;
			}
			if ( i==20 ) return current;
		}
	}
	return 0;
}
