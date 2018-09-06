/* A simple C project */

/* author	tor0002
 * name		Thatcher Rickertsen
 * email	tor0002@auburn.edu
 * date		08/31/2018
 * Processes an array of 10 numbers and returns the average of their squares. */

#include <stdio.h>
#include <math.h>

double avgOfSqrts(double[]);

int main() {
	double sampleArray[10] = {10, 9, 8, 7, 6, 6, 7, 8, 9, 10};
	printf("%lf", avgOfSqrts(sampleArray));
	return 0;
}

double avgOfSqrts(double arrayIn[10]) {
	double sum = 0;
	int i;
	for (i = 0; i < 10; i++) {
		double cur = arrayIn[i];
		double sqrtResult = sqrt(cur);
		sum += sqrtResult;	
	}
	return sum/10;
}
