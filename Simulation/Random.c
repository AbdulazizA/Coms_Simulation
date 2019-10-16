#include <random.h>

long A = 23597;
long B = 0;
long M = 0x7FFFFFFF;
long SEED = 111111 * 8 + 3;

// Defining the Uniform distribution random number generator (between 0 and 1)
double generateNextUniform() {
	SEED = ((A * SEED + B) & M);// multiplicative congeuiential formula using bitwise mask
	return (SEED / (double)M);// return normalized pseudo-random number

}

// Defining normally distributed random number generator
double generateNextGaussian(double mean, double var) {
	double value = -6 + mean; // define the variable to store a single random number.
	for (int i = 0; i < 12; i++) {// for loon to add up 12 uniformly distributed numbers.
		value += generateNextUniform(); // calculates the sum of the pseudo-random number
	}
	return (sqrt(var)); // returns the value centered at the given mean at the specified variance
}

//Define a function to generate and NRZ PAM signal Pseudo-Random numbers
int generateNextSymbol() {
	return ((generateNextUniform() > 0.5) ? 1.0 : -1.0); //incode the signal to be 1s and -1s
}