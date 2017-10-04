/*
 * Project Euler problem 8
 */

#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

/* Function declaration */
long int maxproduct(int, int, int[]);

/* Main */
int main(void)
{
	char letter;
	int input[1000];
	int set_size = 13; // Number of adj. numbers to multiply

	ifstream reader("input.txt");
	if (!reader) {
		perror("Error opening input file");
		return -1;
	}

	for (int i=0; letter!='\n'; i++) {
		reader.get(letter);
		input[i] = (int) letter-48; //Cause ASCII
	}

	for (int i=0; i<1000; i++) {
		
	}

	long int res = maxproduct(1000, set_size, input);
	printf("Largest product is: %ld\n", res);
	return 0;
}

long int maxproduct(int size, int setsize, int intarray[]) {
	long int max = 0;
	for (int i=0; i<size; i++) {
		long int set = intarray[i];
		for (int j=i+1; j<i+setsize && j<size; j++)
			set *= intarray[j];
		if (set > max)
			max = set;
	}
	return max;
}
